#include <stdlib.h>
#include <stdio.h>
int main(){
	int pid = fork();
	int n = 15;
	if (pid>0){
		printf ("Hello from parent [%d-%d]\n", pid,n);
	}
	else {
		printf("Hello from child [%d-%d]\n",pid,n);
	}
}

