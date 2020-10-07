#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int *p;
	p = &n;
	scanf("%d",p);
	printf("%#p %d",p,*p);
	return 0;
}
