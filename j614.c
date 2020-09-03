#include <stdio.h>
#include <string.h>
typedef struct student{
	char school[20];
	int grade;
	
}stu;

int main(){
	stu s;
	scanf("%s",&s.school);
	scanf("%d",&s.grade);
	stu j;
	j.grade=6;
	strcpy(j.school,"Jejuelementary");
	printf("%d grade in %s School\n",j.grade,j.school);
	printf("%d grade in %s School",s.grade,s.school);
	return 0;
}
