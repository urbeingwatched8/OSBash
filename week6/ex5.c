#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include <sys/types.h>

int main(void){
	int id = fork();
	if(0 == id){
		while(1){
			printf("Son: I feel alive\n");
			sleep(1);
		}
	}
	else{
		sleep(3);
		printf("Parent: Bang bang bang and you're dead\n");
		kill(id,SIGTERM);
	}
}
