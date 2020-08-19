#include <stdio.h>
int main(){
	
	char c[100];
	int i;
	scanf("%s", &c);
	
	for(i=0;i<strlen(c);i++){
		printf("%c", c[i]+2);
	}
	printf("\n");
	for(i=0;i<strlen(c);i++){
		printf("%c", (c[i]*7)%80+48);
	}
	
	
	
	return 0;
}
