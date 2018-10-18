#include <stdio.h>
#include <stdlib.h>

typedef struct {
   int page_name;
   int count;
   int ref_bit;
} page;

int main(){
	int N;
	int temp;
	int i;
	int min;
	int nomiss;
	int missed=0;
	int the_needed=0;
	scanf("%d",&N);
	
	page array1[N];
	FILE *read_f;
	for(i=0;i<N;i++){
		array1[i].page_name=-380;
		array1[i].count=-1000;
	}
	read_f = fopen ("input.txt","r");
	
