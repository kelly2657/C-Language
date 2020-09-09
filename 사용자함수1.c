#include <stdio.h>
int sum(int x){
	int i;
	int k = 0;
	for(i=1;i<=x;i++){
		k = k+i;
		 
	}
	return k;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
