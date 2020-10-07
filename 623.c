#include <stdio.h>
#include <stdlib.h>
int main(){
	double n[5];
	double *q,*w,*e,*r,*t;
	q = &n[0];
	w = &n[1];
	e = &n[2];
	r = &n[3];
	t = &n[4];
	scanf("%lf %lf %lf %lf %lf",q,w,e,r,t);
	printf("%.1f %.1f %.1f %.1f %.1f",*q,*w,*e,*r,*t);
	return 0;
}
