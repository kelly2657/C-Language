#include <stdio.h>
int main(){
	int n;
	int *p;
	p = &n;
	scanf("%d",p);
	printf("%d...%d",*p/10,*p%10);
	return 0;
}
