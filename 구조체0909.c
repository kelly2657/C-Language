#include <stdio.h>
#include <string.h>
typedef struct student{
	char name[20];
	int height;
}stu;
int main(){
	stu m[5];
	int i,j;
	for(i=0;i<5;i++){
		scanf("%s %d",&m[i].name,&m[i].height);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(m[i].height>m[j].height){
				int k;
				k=m[i].height;
				m[i].height = m[j].height;
				m[j].height = k;
				char a[20];
				strcpy(a,m[i].name);
				strcpy(m[i].name,m[j].name);
				strcpy(m[j].name,a);
			}
		}
	}
	printf("%s %d",m[0].name,m[0].height);
	return 0;
}
