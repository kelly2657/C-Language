#include <stdio.h>
int main(){
	int num;
	while(1){
		scanf("%d",&num);
		if(num%3 == 0){
			printf("%d\n",num/3);
		}
		if(num == -1){
			break;
		}
	}
	return 0;
}
