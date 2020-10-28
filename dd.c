#include <stdio.h>
void p(int num);
int main(){

	int ret = functionwithret();
	p(ret);
	return 0;
}
void p(int num){
	printf("%d",num);
}
functionwithret(){
	printf("반환값 있음.");
	return 10;
}
