#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;
	int n,m;
	scanf("%d %d",&n,&m);
	int **A = (int**)malloc(sizeof(int)*n*m);
	
	for(i=0;i<m;i++){
		A[i] = (int*)malloc(sizeof(int)*n);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",A[j][i]);
		}
		printf("\n");
	}
	return 0;
}
