#include <stdio.h>
#include <string.h>
int main(){
	
	char c[100];
	int check[5] = {0};
	int i;
	scanf("%s",&c);
	if(8<=strlen(c)<=15){
		check[0] = 1;
	}
	
	for(i=0;i<strlen(c);i++){
		if(65<=c[i] && c[i]<=90){
			check[1]= 1;			
		}
	}
	
	for(i=0;i<strlen(c);i++){
		if(96<=c[i] && c[i]<=122){
			check[2] = 1;
		}
	}

	for(i=0;i<strlen(c);i++){
		if(48<=c[i] && c[i]<=57){
			check[3] = 1;
		}
	}
	
	for(i=0;i<strlen(c);i++){
		if((33<=c[i] && c[i]<=47) || (c[i]<=58 && c[i]<=64) || c[i] == 91 || (c[i]<=93 && c[i]<=96) || (c[i]<=123 && c[i]<=126)){
			check[4] = 1;
		}
	}
	
	if(check[0] && check[1] && check[2] && check[3] && check[4]){
		printf("valid");
	}
	else{
		printf("invalid");
	}

	return 0;
}
