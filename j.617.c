#include <stdio.h>
#include <string.h>

typedef struct program{
	char name[20];
	int height;
}pro;

int main(){
	pro member[5];
	int i;
	int min = 10000;
	char minmem[20];
	for(i=0;i<5;i++){
		scanf("%s %d",&member[i].name,&member[i].height);
		if(min>member[i].height){
			min = member[i].height;
			strcpy(minmem,member[i].name);
		}		
	}

	printf("%s %d",minmem, min);
	return 0;
}
