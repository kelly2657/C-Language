#include <stdio.h>
int main(){
	int n,a,b;
	int sum=0;
	scanf("%d %d",&a,&b);
	if(a>b){
		int k;
		k=a;
		a=b;
		b=k;
    }
	for(n=0;a<=b;a++){
		if(a%3==0 || a%5==0){
			sum = sum+a;
			n++;
		}
	}
	printf("sum : %d\n",sum);
	printf("avg : %.1f",sum/(double)(n));
	return 0;
}
