#include <stdio.h>
int main(){
	unsigned int a;//unsigned int -> 음의정수범위만큼 양의정수 범위가 늘어남 
	scanf("%u",&a);//음의 정수범위는 인정x, 0 ~ 
	printf("%u",a);
}
