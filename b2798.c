// 3Áß for¹® 
// max 
#include <stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int i;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=0;
	int q,w,e;
	
	for(q=0;q<n-2;q++){
		for(w=q+1;w<n-1;w++){
			for(e=w+1;e<n;e++){
				if(max<a[q]+a[w]+a[e] && a[q]+a[w]+a[e]<=m){
					max=a[q]+a[w]+a[e];
				}
			}
		}
	}
	printf("%d",max);
} 
