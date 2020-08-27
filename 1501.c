#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	int k=1;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j] = k;
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
