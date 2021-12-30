#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mut2 = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t student_wait = PTHREAD_COND_INITIALIZER;
pthread_cond_t bartender_wait = PTHREAD_COND_INITIALIZER;
int barrel_size = 50;
int bartender_wake_count = 3;

void drink_and_think()
{
	printf("\n Student drank Beer and is now thinking ");
}



/* this function is run by the second thread */
void *get_serving(void *thread_id)
{
	//printf("\n Total Beer in barrel >>> %d ", barrel_size);

	if (barrel_size == 0)
	{

		printf("\n*********************** ");
		printf("\n***CALLING BARTENDER*** ");
		printf("\n*********************** ");
		if (bartender_wake_count > 0)
		{
			pthread_mutex_lock(&mut);
			pthread_cond_broadcast(&bartender_wait);
			pthread_cond_wait(&student_wait, &mut);
			barrel_size--;
			drink_and_think();
			pthread_mutex_unlock(&mut);






		}
		else
		{
			int o;
			printf("\n***BARTENDER FAILED TO RESPOND, YOU CALLED HIM 3 TIMES !!!*** ");
			printf("\n\n\n1.End Simulation");
			printf("\nEnter your choice:");
			scanf("%d", &o);
			switch (o)
			{
			case 1:
				printf("\nExiting:");

				exit;
			}
		}
	}
	else
	{
		barrel_size--;
		drink_and_think();
	}

	printf("\n Total Beer left after drinking >>> %d ", barrel_size);

	return NULL;
}

void *refill(void *thread_id)
{
	//Sleep until barell is empty
	pthread_mutex_lock(&mut);
	while (barrel_size >= 1)
	{
		pthread_cond_wait(&bartender_wait, &mut);
	}
	bartender_wake_count--;

	printf("\n *** BARTENDER IS AWAKE, %d CHANCES MORE *** ", bartender_wake_count);

	//generate random number below 50
	int num = (rand() % (50 - 1 + 1)) + 1;
	barrel_size = num;
	printf("\n *** BARTENDER ADDED %d FLASKS OF BEER *** ", num);
	printf("\n*********************** ");
	printf("\n***CALLING STUDENT*** ");
	printf("\n*********************** ");
	pthread_cond_broadcast(&student_wait);
	pthread_mutex_unlock(&mut);



	return NULL;
}

int main()
{
	int n;
	printf("\n1.Start Simulation \n>>Press 'p' anytime during simulation to pause");

	printf("\nEnter your choice:");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("\n TOTAL BEER IN BARREL --- %d ", barrel_size);
		printf("\nEnter number of students ");
		scanf("%d", &n);

		pthread_t students[n]; //Thread of student
		pthread_t bartender;   //Bartender Thread


		//Create Bartender Thread
		int rc = pthread_create(&bartender, NULL, refill, (void *)&bartender);

		for (int i = 0; i < n; i++)
		{
			int rc = pthread_create(&students[i], NULL, get_serving, (void *)&students[i]);
			pthread_join(students[i], NULL);
		}


		pthread_join(bartender, NULL);

		pthread_exit(NULL);
	}

}

