/*
	�ζǺ���
	
	7���� ���� 1~50 ���̷� �����ϰ� �Ҵ��� ��
	
	7���� ���� �Է����� �� ������ �� ��ΰ� ���� ������ ���Ͽ� 
	
	7�� ��� ������ "1��"
	6���� ������ "2��"
	5���� ������ "3��"
	�� ����ϼ���. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int a[7];
	int b[7];
	int i;
	int n=0;
	srand(time(NULL));
	
	for(i=0;i<7;i++){
		a[i] = rand() %50+1;
	}
	for(i=0;i<7;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<7;i++){
		scanf("%d",&b[i]);
		if(a[i]==b[i]){
			n++;
		}
	}
	if(n==7){
		printf("1��");
	}
	else if(n==6){
		printf("2��");
	}
	else if(n==5){
		printf("3��");
	} 
	else{
		printf("x");
	}
} 
