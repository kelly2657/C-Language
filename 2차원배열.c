/*
	3�� 5�� 2���� �迭�� ������ ��
	���ʴ�� ���� �Է��� �� 
	����ϼ���. 
*/
#include <stdio.h>
int main(){
	
	// int A[��][��] 
	int A[3][5];
	
	int i, j;
	int k = 1;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			A[i][j] = k;
			k++;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	
	
	
} 
