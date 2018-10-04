#include <stdio.h>
#include <stdlib.h>

int* realloc1(int *array, int N1, int N2){
	if (!array){
		array = malloc(N2);
		return array;
		}
	if (N2==0){
		free(array);
		return NULL;
		}
	int *array2= malloc(N2*sizeof(int));
	int N3;
	int i;
	if (N1<N2){
		N3=N1;
		}
	else{
		N3=N2;
		}
	for(i=0;i<N3;i++){
		array2[i]=array[i];
		}
	free(array);
	return array2;
	}
	
int main(){
	int N1=9;
	int *array= malloc(N1*sizeof(int));
	int i;
	for (i=0;i<N1;i++){
		array[i]=i;
		}
	int N2=15;
	array = realloc1(array,N1,N2);
	for(i=0;i<N2;i++){
		printf("%d ",array[i]);
		}
	return 0;
	}