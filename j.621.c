#include <stdio.h>
int main(){
	int n,m;
	int *p,*q;
	p = &n;
	q = &m;
	scanf("%d %d",p,q);
	printf("%d + %d = %d\n",*p,*q,*p+*q);
	printf("%d - %d = %d\n",*p,*q,*p-*q);
	printf("%d * %d = %d\n",*p,*q,*p * *q);
	printf("%d / %d = %d",*p,*q,*p / *q);
	return 0;
}
