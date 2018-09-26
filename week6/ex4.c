#include<stdio.h>
#include<signal.h>

void receiving_sigstop(int sign){
	printf("SIGSTOP was received\n");
}
void receiving_sigusr1(int sign){
	printf("SIGUSR1 was received\n");
}
void receiving_sigkill(int sign){
	printf("SIGKILL was received\n");
}

int main(void){
	signal (SIGKILL, receiving_sigkill);
	signal (SIGUSR1, receiving_sigusr1);
 	signal(SIGSTOP, receiving_sigstop);
  	for (int i=0;i<10;i++){
		 sleep(1);
 	}
	return 0;
}

