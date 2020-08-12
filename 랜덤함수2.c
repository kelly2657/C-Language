/*
	로또복권
	
	7개의 값을 1~50 사이로 랜덤하게 할당한 후
	
	7개의 값을 입력했을 때 순서와 값 모두가 같은 개수를 구하여 
	
	7개 모두 같으면 "1등"
	6개가 같으면 "2등"
	5개가 같으면 "3등"
	을 출력하세요. 
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
		printf("1등");
	}
	else if(n==6){
		printf("2등");
	}
	else if(n==5){
		printf("3등");
	} 
	else{
		printf("x");
	}
} 
