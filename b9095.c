#include <stdio.h>
int cnt=1;
int n;
int m;
res[100];
int sum(int a, int b,int c){
	if(cnt == n){
		return a;
	}
	else{
		cnt++;
	    sum(b,c,a+b+c);		
	}
}

int main(){
	int i;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		cnt = 1;
		scanf("%d",&n);
		res[i]=sum(1,2,4);
	}
	for(i=0;i<m;i++){
		printf("%d\n",res[i]);
	}
	return 0;
}
