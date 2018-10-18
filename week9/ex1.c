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
	int min=0;
	int nomiss=0;
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
	while (!feof(read_f,"%d",&temp);
		fscanf(read_f,"%d",&temp);
		for(i=0;i<N;i++){
		if (array1[i].page_name==-380){
			min =i;
			break();
		}
		if (array1[i].page_name==temp){
				nomiss=1;
				array1[i].ref_bit=1;
				array1[i].count=0;
			}
			else {
				array1[i].count++;
			}
			if (array1[i].count>array1[min].count){
				min = i;
			}
		}
		if (nomiss == 0){
			array1[min].page_name=temp;
			array1[min].ref_bit=0;
			array1[min].count=0;
		}
		the_needed=the_needed+nomiss;
		missed= missed+1-nomiss;
	}
	fclose(read_f);
	printf("%d/%d\n", the_needed,missed);

}
