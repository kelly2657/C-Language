#include <stdio.h>
void number(int x,int y);

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	number(n,m);
	return 0;
}

void number(int x,int y){
	int i;
	for(i=x;i<=y;i++){
		printf("%d\n",i);
	}
}
