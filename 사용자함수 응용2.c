#include <stdio.h>
int num(int x,char k,int y){
	if(k == '/'){
		return x/y;
	}
	else if(k== '+'){
		return x+y;
	}
	else if(k == '-'){
		return x-y;
	}
	else if(k== '*'){
		return x*y;
	}
	else{
		return 0;
	}
}
int main(){
	int n,m;
	char a;
	scanf("%d %c %d",&n,&a,&m);
	printf("%d",num(n,a,m));
	return 0;
}
