#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m;
	int *p,*q;
	p = (int*)malloc(sizeof(int));
	q = (int*)malloc(sizeof(int));
	scanf("%d %d",p,q);
	printf("%d %d",*p,*q);
}
