#include <stdio.h>
#include <stdlib.h>
int main (){
	int i = 0;
	while (i<3) {
		fork();
		i++;
		sleep(5);
	}
} 
