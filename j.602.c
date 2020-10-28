#include <stdio.h>
int main(){
	int i;
	char A[5][30];
	for(i=0;i<5;i++){
		scanf("%s",&A[i]);
	}
	for(i=4;i>=0;i--){
		printf("%s\n",A[i]);
	}
	return 0;
}
