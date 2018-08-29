#include <stdio.h>

void swap(int *x, int *y){
	int g=*y;
	*y=*x;
	*x=g;
}

int main(){
	int x;
	int y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("\n");
	swap(&x,&y);
	printf("%d %d\n",x,y);
}
