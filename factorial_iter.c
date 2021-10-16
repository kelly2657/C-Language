#include <stdio.h>
int factorial_iter(int n){
	int i,result =1;
	for(i=1;i<=n;i++){
		result = result*i;
	}
	return(result);
}
int main(){
	printf("%d",factorial_iter(3));
	return 0;
}
