#include <stdio.h>

int cnt = 1;	// �ڸ���
int n; 
int fi(int x, int y){
	
	if(cnt == n){
		return x;
	}
	else{
		cnt++;	// ī��Ʈ ���� 
		fi(y,x+y);
	}
}

int main(){
	scanf("%d", &n);
	printf("%d", fi(1,1));	// 1 ,1�� ���� 
	return 0;
}
