#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int A[n];
	int *p = A;
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i]<p[j]){
				int k;
				k = p[i];
				p[i] = p[j];
				p[j] = k;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",p[i]);
	}
	return 0;
}
