#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct List{
	int time;
	char name[20];
	int num;
	struct List *next;

}List;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	
	List *Sta = (List*)malloc(sizeof(List)*n);
	for(i=0;i<n;i++){
		scanf("%s %d",&Sta[i].name,&Sta[i].time);
		Sta[i].next = &Sta[i+1];
		Sta[i].num = i+1;
	}
	Sta[n-1].next = NULL;
	
	char s[20],e[20];
	scanf("%s %s",&s,&e);
	
	List *search;
	List *start;
	search = &Sta[0]; // [0][][]
	while(search != NULL){
		if(strcmp(search->name,s)==0){
			start = search;
			break;
		}
		search = search->next;
	}
	search = &Sta[0];
	List *end;
	while(search != NULL){
		if(strcmp(search->name,e)==0){
			end = search;
			break;
		}
		search = search->next;
	}
	int q;
	int sum=0;
	if(start->num > end->num){
		q= start;
		start = end;
		end = q;
	}
	while(start != end){
		sum = start->time + sum;
		start = start->next;  
	}
	printf("%d",sum);
}
