#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	scanf("%d", &N);
	int *array = malloc(N*sizeof(int));
	int i;
	for (i =0;i<N;i++){
		array[i]=i;
		}
	for (i=0;i<N;i++){
		printf("%d\n",array[i]);
		}
	free(array);
	}
