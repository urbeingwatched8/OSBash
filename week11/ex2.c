#include <stdio.h>
 
#define  BUF_SIZE  512
 
char buffer[BUF_SIZE];

int main(void)
{	 
	setvbuf(stdout, buffer, _IOLBF, sizeof(buf));
	sleep(1);
 	printf("H");
 	sleep(1);
 	printf("e");
 	sleep(1);
 	printf("l");
 	sleep(1);
 	printf("l");
 	sleep(1);
 	printf("o\n");
 	fflush(stdout);
}
