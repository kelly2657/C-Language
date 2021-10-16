#include <stdio.h>
typedef struct Point{
	int n;
	int m;	
}point;

int get_dis(point p1,point p2){
	
	int distance = sqrt((p1.n-p2.n)*(p1.n-p2.n) + (p1.m-p2.m)*(p1.m-p2.m));
	return distance;
}

int main(){
	point p1={1,2};
	point p2={9,8};
	printf("%d",get_dis(p1,p2));
	return 0;
}
