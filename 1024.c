#include <stdio.h>
int main(){
	char a[21];
	scanf("%s",&a);
	int i;
	for(i=0;i<21;i++){
		if(a[i]=='\0'){
			break;
		}
		printf("\'%c\'\n",a[i]);
	}
	
}
