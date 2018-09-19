#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <assert.h>

int main (int a, char** b){
	int N;
	int i;
	int args;
	scanf("%i",&N);
	pthread_t threads[N];
	
	for (i=0;i<N;++i){
	args[i]=i;
	printf ("thread %d\n is done",i);
	pthread_create(&thread[i], NULL, print_funct, &args[i]);
	}
	printf ("all threads are done\n");
	return 0;
}

void* print_funct(void* arg){
	printf ("this is thread number %d\n",*((int*) arg));
	pthread_exit(3);
}
