#include <stdio.h>
double power(double x,int n){
	if(n==0){
		return 1;
		printf("dd");
	}
	else if((n%2)==0){
		return power(x*x,n/2);
		printf("dd1");
	}
	else{
		return x*power(x*x,(n-1)/2);
		printf("dd2");
	}
}
int main(){
	printf("%f",power(2,10));
	return 0;

}
