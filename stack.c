#include <stdio.h>
#include <stdlib.h>
int i=0;
int j;
void push(int *stack){
	int x;
	scanf("%d",&x);
	stack[i] = x;
	i=i+1;	
}
void pop(int *stack){
	i=i-1;
}
int main(){
	int k;
	int *stack = (int*)malloc(sizeof(int)*10);
	char menu[20];
	scanf("%s",&menu);
	
	while(strcmp(menu,"0")!=0){
		if(strcmp(menu,"push")==0){
			push(stack);
		}
		if(strcmp(menu,"pop")==0){
			pop(stack);
		}
		for(k=0;k<i;k++){
			printf("%d ",stack[k]);
		}
		printf("\n");
		
		scanf("%s",&menu);
	}
	return 0;
}
