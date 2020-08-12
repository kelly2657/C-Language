#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	int k=1;
	int s=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j] = k;
			k++;
			if(i==0 || i==n-1 || j==0 || j==n-1){
				s = s + a[i][j];
			}
		}
	}
		printf("%d",s);
}
