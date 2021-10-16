#include<stdio.h>
#include<string.h>
void copy(char from[],char to[]);

void copy(char from[],char to[]){
	int i=0;
	while((to[i]=from[i])!='\0'){
		i++;
	}
}
int main(){
	char a[100][100];
	char b[100];
	int max=0;
	int i,j=0;
	char line[20];
	char str1[100];
	while(strcmp(line,"no")!=0){
		scanf("%s",&line);
		
		copy(line,str1);
		for(j=0;j<strlen(str1);j++){
			a[i][j] = str1[j];
		}
		i++;
		int p,q;
		for(q=0;q<=100;q++){
			for(p=1;p<100;p++){
				if (a[q]<a[p]){
					strcpy(b,a[q]);
					strcpy(a[q],a[p]);
					strcpy(a[p],b);
				}
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%c",a[i][j]);
		}
	}
	return 0;
}

