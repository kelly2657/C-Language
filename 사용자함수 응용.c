#include <stdio.h>
void squ(int x){
	int i,j;
	int k=1;
	for(i=1;i<=x;i++){
		for(j=1;j<=x;j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	squ(n);
	return 0;
}
