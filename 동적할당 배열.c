#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int *p = (int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",p[i]);
	}	
}
