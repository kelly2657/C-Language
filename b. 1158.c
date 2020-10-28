#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int n,k,i,j;
	int b;
	scanf("%d",&n);
	int *queue = (int*)malloc(sizeof(int)*n);
	int arr[n];
	int a = n;
	for(i=0;i<n;i++){
		queue[i] = i+1; 
	}
	scanf("%d",&k);
	while(a>=0){
		for(i=0;i<k-1;i++){
			b =queue[0];
			
			for(j=0;j<a-1;j++){
				queue[j] = queue[j+1];
			}
			
			queue[a-1] = b; 
			for(j=0;j<a;j++){
				printf("%d ", queue[j]);
			}
			printf("\n");
		}
		
		arr[n-a] = queue[0];
		for(i=0;i<a-1;i++){
			queue[i] = queue[i+1];
		}
		a = a-1;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
