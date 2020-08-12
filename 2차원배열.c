/*
	3행 5열 2차원 배열을 생성한 후
	차례대로 값을 입력한 뒤 
	출력하세요. 
*/
#include <stdio.h>
int main(){
	
	// int A[행][열] 
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
