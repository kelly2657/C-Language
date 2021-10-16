#include <stdio.h>
int a(int n){
	if(n<0){
		return 0;
	}
    return n+a(n-3);
}
int main(){
	printf("%d",a(10));
}
