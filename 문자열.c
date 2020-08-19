#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	char b[100];
	
	scanf("%s",&a);
	strcpy(b,"Hello");
	printf("%s\n",a);
	printf("%s",b);
	
	return 0;
}
