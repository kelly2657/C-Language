#include <stdio.h>
int main(){
	float score;
	scanf("%f",&score);
	switch((int)score){
		case 4: printf("scholarship"); break;
		case 3: printf("next semester"); break; 
		case 2: printf("seasonal semester"); break;
		default: printf("retake"); break;
	}
	return 0;
}
