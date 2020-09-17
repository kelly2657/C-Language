#include <stdio.h>

int cnt = 1;	// 자릿수
int n; 
int fi(int x, int y){
	
	if(cnt == n){
		return x;
	}
	else{
		cnt++;	// 카운트 세기 
		fi(y,x+y);
	}
}

int main(){
	scanf("%d", &n);
	printf("%d", fi(1,1));	// 1 ,1로 시작 
	return 0;
}
