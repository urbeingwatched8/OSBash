#include<stdio.h>
#include<signal.h>

void receiving_signal(int sign){
	printf("SIGINT was received\n");
}

int main(void){
 	signal(SIGINT, receiving_signal);
  	for (int i=0;i<5;i++){
		 sleep(1);
 	}
	return 0;
}
