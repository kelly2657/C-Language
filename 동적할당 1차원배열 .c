#include <stdio.h>
#include <stdlib.h>
int i;
int cnt[10];
void Input_A(int *A){
    for(i=0;i<10;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void Copy_B(int *B,int *A){
    for(i=0;i<10;i++){
        B[i] = A[i];
    }
    for(i=0;i<10;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int Total(int *A,int *B){
    for(i=0;i<10;i++){
        cnt[i] = A[i] + B[i];
    }
}


int main(){
    
    int *A = (int*)malloc(sizeof(int)*10);
    int *B = (int*)malloc(sizeof(int)*10);
    Input_A(A);
    Copy_B(B,A);
    Total(A,B);
    for(i=0;i<10;i++){
        printf("%d ",cnt[i]);
    }
    
    return 0;
}
