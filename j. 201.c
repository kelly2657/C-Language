#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	int *a;
	a = &num;
	scanf("%d",a);
	int i;
	for(i=0;i<*a;i++){
		printf("*");
	}
	return 0;
}
