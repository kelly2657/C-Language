#include <stdio.h>
#include <string.h>
struct customer{
	char name[20];
	int age;
	char gender;
};
int main(){
	struct customer kim;
	scanf("%s",&kim.name);
	scanf("%d",&kim.age);
	scanf("\n%c",&kim.gender);
	printf("%s\n",kim.name);
	printf("%d\n",kim.age);
	printf("%c",kim.gender);
	
	return 0;
}
