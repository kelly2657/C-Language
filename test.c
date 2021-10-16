#include <stdio.h>
int sub(int n){
	int i=n;
	int result =0;
	while(i>=0){
		result = result + i;
		i = i-3; 
	}
	return result;
}
int main(){
	printf("%d",sub(10));
	return 0;
}


