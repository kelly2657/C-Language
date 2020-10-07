#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float sum = 0;
	double A[n];
	double *p = A;
	int i;
	for(i=0;i<n;i++){
		scanf("%lf",&p[i]);
		sum = sum + p[i];
	}
	for(i=0;i<n;i++){
		printf("%.2lf ",p[i]);
	}
	printf("\n");
	printf("hap : %.2lf\n",sum);
	printf("avg : %.2lf",sum/n);
	return 0;
}
