#include <stdio.h>
#include <string.h>
int main(int argc, char *args[]){
	int n;
	sscanf(args[1],"%d",&n);
	int b;
	int a;
	for (a=1;a<n+1;a++){
		for (b=0;b< n-a;b++){
			printf(" ");
		}
		for (b=0;b<2*a-1;b++){
			printf("%c",'*');
		}
		printf("\n");
	}

}
