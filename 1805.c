#include <stdio.h>
#include <string.h>
typedef struct program{
	int number;
	int gas;
}pro;
int main(){
	int n;
	scanf("%d",&n);
	pro m[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d %d",&m[i].number,&m[i].gas);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(m[i].number>m[j].number){
				int q,p;
				q = m[i].number;
				m[i].number = m[j].number;
				m[j].number = q;
				p = m[i].gas;
				m[i].gas = m[j].gas;
				m[j].gas = p;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d %d\n",m[i].number,m[i].gas);
	}
	return 0;
}
