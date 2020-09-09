#include <stdio.h>
#include <string.h>
typedef struct triangle{
	float x1,y1;
}tri;
int main(){
	tri a;
	tri b;
	tri c;
	scanf("%f %f %f %f %f %f",&a.x1,&a.y1,&b.x1,&b.y1,&c.x1,&c.y1);
	printf("(%.1f, %.1f)",(a.x1+b.x1+c.x1)/3,(a.y1+b.y1+c.y1)/3);
	
}
