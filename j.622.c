#include <stdio.h>
#include <stdlib.h>
int main(){
	int n[5];
	int *q,*w,*e,*r,*t;
	q = &n[0];
	w = &n[1];
	e = &n[2];
	r = &n[3];
	t = &n[4];
	scanf("%d %d %d %d %d",q,w,e,r,t);
	printf("%d %d %d",*q,*e,*t);
	return 0;
}
