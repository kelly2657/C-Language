#include <stdio.h>
int main(){
	int n,m,o;
	int *p,*q,*r;
	p = &n;
	q = &m;
	r = &o;
	scanf("%d %d",p,q);
	*r = *p-*q;
	if(*r<0){
		printf("%d",-*r);
	}
	else{
		printf("%d",*r);
	}
	
	return 0;
}
