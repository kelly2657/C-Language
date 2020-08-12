/*
	rand() % 100+1	// 0+1~99+1  1~100
	
	rand() % 100+1;
	
	5칸의 배열을 선언한 뒤 1~50 사이의 랜덤값을 할당하고, 
	차례대로 출력하세요. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int a[5];
	int i;

	for(i=0;i<5;i++){
		a[i] = rand() %50+1;
	}
	
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
} 
