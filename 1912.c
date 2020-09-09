#include <stdio.h>
int n;
int num(int x){
	if(x == 1){
		return x;
	}
	else{
		return x*num(x-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",num(n));
	return 0;
}
