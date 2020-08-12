/*
	난수를 할당하는 함수
	
	rand()
	
	rand() % 범위;
	
	stdlib.h 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){ 
	srand(time(NULL));	// 실시간으로 랜덤함수를 초기화 하는 함수 
	int n;
	n = rand() % 10;	// 0~9
	printf("%d", n);
	
	return 0;
}
