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
	strcpy(head->name,"�������");
	strcpy(tail->name,"��������");
}

void Add_node(List *add){
	add = (List*)malloc(sizeof(List));
	printf("�߰������ �̸� �Է�");
	scanf("%s",&add->name);
	tail->prev->next = add;
	add->prev = tail->prev; 
	add->next = tail;
	tail->prev = add;
	cnt ++;
}

void Del_node(){
	List *del;//������ ��� ã�� ������ 
	char name[20];
	printf("������ ��� �̸� �Է�");
	scanf("%s",&name);
	del = head;
	
	while(del != NULL){
		if(strcmp(del->name,name)==0){
			 del->prev->next = del->next;
			 del->next->prev = del->prev;
			 free(del);//�޸� ���� �Լ�: free(�޸� �ּ�)
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
	printf("ã�� ����� �̸� �Է� : ");
	scanf("%s",&Name);
	search = head;

	int c=0;
	while(search != tail){
		if(strcmp(search->name,Name)==0){
			printf("%d��° ���\n",c);
			printf("%d %d",c,cnt-c+1);
			if(c<cnt-c+1){
				printf("�������");
			}
			else{
				printf("��������"); 
			} 
		}
		search = search->next;
		c++;
	}
	
}
int main(){
	Init();
	int menu;
	printf("1. ����߰� 2. ������ 3. ������ 4. ã�� 5.����\n");
	printf("�޴� �Է� : ");
	scanf("%d",&menu);
	
	while(menu != 5){
		//switch���� case ���� �� �״�� �θ� ������ case���� �ڵ����� -> break��� �ʿ� 
		switch(menu){   // ���ǹ�, Ư������ ��. 
			case 1:
				Add_node(add);
				break; 
			case 2:
				Del_node();//������ �޸� Ž�� 
				break;
			case 3:
				Prt_node();
				break;
			case 4:
			Search_node();
			break;	
		}
		printf("\n\n");
		printf("1. ����߰� 2. ������ 3. ������ 4. ã�� 5.����\n");
		printf("�޴� �Է� : ");
		scanf("%d",&menu);		
	}
	return 0;
}
