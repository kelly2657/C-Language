#include <stdio.h>
double slow_power(double x, int n){
	double result = 1.0;
	int i;
	for(i=0;i<n;i++){
		result = result*x;
	}
	return(result);
}
int main(){
	printf("%f",slow_power(2,10));
	return 0;
}
