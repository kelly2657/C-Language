#include<stdio.h>
int main(){
	int n;
	int i;
	int cap = ["1. Korea","2. USA","3. Japan","4. China"];
	while(n!=0){
		for(i=0;i<4;i++){
			printf(cap[i]);
			printf("\n");
		}
		printf("number? ");
		scanf("%d",&n);
		printf("\n");
		if(n==1){
			printf("Seoul\n\n");
		}
		else if(n==2){
			printf("Washington\n\n");
		}
		else if(n==3){
			printf("Tokyo\n\n");
		}
		else if(n==4){
			printf("Beijing\n\n");
		}
		else{
			printf("none");
		}
	}
}
