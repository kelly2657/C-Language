/*
	rand() % 100+1	// 0+1~99+1  1~100
	
	rand() % 100+1;
	
	5ĭ�� �迭�� ������ �� 1~50 ������ �������� �Ҵ��ϰ�, 
	���ʴ�� ����ϼ���. 
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
