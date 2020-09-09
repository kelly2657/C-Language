#include <stdio.h>
#include <string.h>

typedef struct student{
	char name[20];
	int korean;
	int english;
}stu;

int main(){
	stu j;
	stu s;
	scanf("%s %d %d",&j.name,&j.korean,&j.english);
	scanf("%s %d %d",&s.name,&s.korean,&s.english);
	printf("%s %d %d\n",j.name,j.korean,j.english);
	printf("%s %d %d\n",s.name,s.korean,s.english);
	printf("avg %.0d %.0d",(j.korean+s.korean)/2,(j.english+s.english)/2);
	return 0;
}
