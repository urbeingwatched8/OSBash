#include <stdio.h>
void swap (int *x, int *y)
{
 	 int k = *x;
 	 *x = *y;
	 *y = k;
}


void  sort (int array1[], int n)
{
	int j,i;
	for (i = 0;i<n-1;i++)
	{
		for (j=0;j<n-1-i;j++)
		{
			if (array1[j]>array1[j+1]){
				swap (&array1[j], &array1[j+1]);
			}
		}
	}
}

void main(){
	int n;
	scanf("%d",&n);
	int z;
	int array1[n];
	for (z=0;z<n; z++)
	{
		scanf("%d",&array1[z]);
	}
	sort(array1, n);
	int g;
	for (g=0;g<n;g++)
	{
		printf ("%d",array1[g]);
	}
}
