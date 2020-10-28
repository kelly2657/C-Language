#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i = 0;
int j;
void push(int *queue){
	//printf("ee");
	int x;
	scanf("%d",&x);
	queue[i] = x;
	i = i+1;
}
void pop(int *queue){
	for(j=0;j<i-1;j++){
		queue[j] = queue[j+1];	
	}
	i = i-1;
}

int main(){
	int k;
	int *queue = (int*)malloc(sizeof(int) *10);
	char menu[20];
	scanf("%s", &menu);
	
	while(strcmp(menu,"0") != 0){
		if(strcmp(menu,"push") == 0){
			push(queue);
		}
		
		else if(strcmp(menu,"pop") == 0){
			pop(queue);
		}
		
		for(k=0;k<i;k++){
			printf("%d ",queue[k]);
		}
		printf("\n");
	
		scanf("%s",&menu);
	} 
	return 0;
}
