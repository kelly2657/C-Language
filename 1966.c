#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int tc;
	scanf("%d",&tc);
	int i,j;
	int a = tc;
	int result[tc];
	int n,m;
	int *queue = (int*)malloc(sizeof(int) *100);
	int num[100];
	int numk,k,q;
	int max = 0;
	int cnt;
	
	while(a>=0){
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++){
			scanf("%d",queue[i]);
			num[i] = i+1;
		}
					
		while(cnt<n){
			for(i=0;i<n;i++){
				if(max<queue[i]){
					max = queue[i];
				}
			}
			k = queue[0];
			numk = num[0];
			while(queue[0]!=max){
				for(i=0;i<n-1;i++){
					queue[i] = queue[i+1];
					num[i] = num[i+1];
				}
				queue[n-1] = k;
				num[n-1] = numk;
			}
			
			if(num[0] == m){
				result[tc-a] = cnt;
				cnt++;
				break;
			}
			for(i=0;i<n-1;i++){
				queue[i] = queue[i+1];	
			}
		a = a-1;
		
		}
	}
	for(i=0;i<tc;i++){
		printf("%d",result[i]);
	}
		
	
	return 0;
}
