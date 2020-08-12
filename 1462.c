#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int A[n][n];
	int i,j;
	int k=1;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			A[j][i] = k;
			k++;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",A[i][j]);
		}	
	printf("\n");
	}
}
