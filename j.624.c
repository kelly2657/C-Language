#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int i;
    int cnt = 0;
    scanf("%d",&n);
    float *A = (float*)malloc(sizeof(float)*n);
    for(i=0;i<n;i++){
        scanf("%f",&A[i]);
        cnt = cnt + A[i];
        printf("%.2f ",A[i]);    
    }
    printf("\n");
    printf("hap : %.2f\n",cnt);
    printf("avg : %.2f\n",cnt/n);
    
    return 0;
}
