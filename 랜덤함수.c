/*
	������ �Ҵ��ϴ� �Լ�
	
	rand()
	
	rand() % ����;
	
	stdlib.h 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){ 
	srand(time(NULL));	// �ǽð����� �����Լ��� �ʱ�ȭ �ϴ� �Լ� 
	int n;
	n = rand() % 10;	// 0~9
	printf("%d", n);
	
	return 0;
}
