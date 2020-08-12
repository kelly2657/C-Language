#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int k=1;
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			a[j][i] = k;
			k++;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
}
