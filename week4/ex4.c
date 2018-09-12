#include <stdio.h>
#include <stdlib.h>
int main(){
	char to_read[80];
	while(1){
		printf("$ ");
		fgets ("%s",to_read);
		system (to_read);
	}
}
