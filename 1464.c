#include <stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	int a[n][m];
	int k=1;
	
	for(i=n-1;i>=0;i--){
		for(j=m-1;j>=0;j--){
			a[i][j]=k;
			k++;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
