#include <stdio.h>
int fib_iter(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int pp=0;
	int p=1;
	int result =0;
	int i;
	for(i=2;i<=n;i++){
		result = p+pp;
		pp = p;
		p = result;
		printf("%d\n",result);
	} 
	return result;
}
int main(){
	printf("%d",fib_iter(5));
	
}
