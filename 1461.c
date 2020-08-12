#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int A[n][n];
	int i,j;
	int k=1;
	
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			A[i][j] = k;
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
