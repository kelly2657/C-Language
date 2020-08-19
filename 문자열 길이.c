#include <stdio.h>
#include <string.h>
int main(){
	
	char a[50];
	char b[50];
	
	scanf("%s",&a);
	strcpy(b,"Happy");
	
	if(strcmp(a,b)==0){
		printf("°°´Ù");
	}
	else{
		if(strlen(a)>strlen(b)){
			printf("%s",a);
		}
		else if(strlen(a)<strlen(b)){
			printf("%s",b);
		}
		else{
			printf("%d",strlen(a));
		}
	}
	return 0;
}
