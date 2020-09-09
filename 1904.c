#include <stdio.h>
void odd(int x,int y){
	if(x>y){
		return;
	}
	else if(x%2 != 0){
		printf("%d\n",x);
		odd(x+1,y);
	}
	else{
		odd(x+1,y);
	}
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	odd(n,m);
	return 0;
}
