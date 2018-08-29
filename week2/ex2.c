#include <stdio.h>
#include <string.h>
int main(){
	char str[80];
	fgets(str, sizeof str, stdin);
	int i;
	int u;
	int count;
	while( str[count]!='\0'){
		count++;
	}
	char str2[count];
	for (u = 0; u<count;u++){
		str2[count-u-1]=str[u];
	}
	str2[count]='\0';
	printf("%s", str2);
	printf("\n");
	return 0;
}
