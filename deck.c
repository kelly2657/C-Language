#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int check[5] = {0};
	char a[10]; 
	for(i=0;i<n;i++){
		scanf("%s",&a);
		if(strcmp(a,"gold")==0){
			check[0] = 1;
		}
		else if(strcmp(a,"mana")==0){
			check[1] = 1;
		}
		else if(strcmp(a,"light")==0){
			check[2] = 1;
		}
		else if(strcmp(a,"dark")==0){
			check[3] = 1;
		}
		else if(strcmp(a,"nature")==0){
			check[4] = 1;
		}

	}
	
	if(check[0]+check[1]+check[2]+check[3]+check[4] <= 3){
		printf("valid");
	}
	else{
		printf("invalid");
	}
	return 0;
}
