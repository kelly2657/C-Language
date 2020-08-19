#include <stdio.h>
#include <string.h>

int main(){
	
	char a[100];
	char b[100];
	
	scanf("%s", &a);
	scanf("%s", &b);
	
	if(strcmp(a,b)==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	return 0;
}
