#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct List{
	char name[20];

	struct List *next;
	struct List *prev;	
	
}List;
List *head;
List *tail;
List *add;

int cnt=0;


void Init(){
	head = (List*)malloc(sizeof(List));
	tail = (List*)malloc(sizeof(List));
	head->next = tail;
	head->prev = NULL;
	tail->next = NULL;
	tail->prev = head;
	strcpy(head->name,"출발지점");
	strcpy(tail->name,"도착지점");
}

void Add_node(List *add){
	add = (List*)malloc(sizeof(List));
	printf("추가노드의 이름 입력");
	scanf("%s",&add->name);
	tail->prev->next = add;
	add->prev = tail->prev; 
	add->next = tail;
	tail->prev = add;
	cnt ++;
}

void Del_node(){
	List *del;//삭제할 노드 찾을 포인터 
	char name[20];
	printf("삭제할 노드 이름 입력");
	scanf("%s",&name);
	del = head;
	
	while(del != NULL){
		if(strcmp(del->name,name)==0){
			 del->prev->next = del->next;
			 del->next->prev = del->prev;
			 free(del);//메모리 삭제 함수: free(메모리 주소)
			 cnt--;
			 break;
		}
		del = del->next;
	}
}

void Prt_node(){
	List *prt;
	prt = head;
	while(prt != NULL){
		printf("%s",prt->name);
		if(prt!=tail){
			printf("<->");
		}
		prt = prt->next;
		
	}
	printf("\n\n");
}

void Search_node(){
	List *search;
	char Name[20];
	printf("찾을 노드의 이름 입력 : ");
	scanf("%s",&Name);
	search = head;

	int c=0;
	while(search != tail){
		if(strcmp(search->name,Name)==0){
			printf("%d번째 노드\n",c);
			printf("%d %d",c,cnt-c+1);
			if(c<cnt-c+1){
				printf("출발지점");
			}
			else{
				printf("도착지점"); 
			} 
		}
		search = search->next;
		c++;
	}
	
}
int main(){
	Init();
	int menu;
	printf("1. 노드추가 2. 노드삭제 3. 노드출력 4. 찾기 5.종료\n");
	printf("메뉴 입력 : ");
	scanf("%d",&menu);
	
	while(menu != 5){
		//switch문은 case 실행 뒤 그대로 두면 나머지 case까지 자동실행 -> break사용 필요 
		switch(menu){   // 조건문, 특정값만 비교. 
			case 1:
				Add_node(add);
				break; 
			case 2:
				Del_node();//삭제할 메모리 탐색 
				break;
			case 3:
				Prt_node();
				break;
			case 4:
			Search_node();
			break;	
		}
		printf("\n\n");
		printf("1. 노드추가 2. 노드삭제 3. 노드출력 4. 찾기 5.종료\n");
		printf("메뉴 입력 : ");
		scanf("%d",&menu);		
	}
	return 0;
}
