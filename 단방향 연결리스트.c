#include <stdio.h>
//���Ḯ��Ʈ ���� ���� 
typedef struct List{
	int data;
	struct List *next; //���� ��� ����Ű�� ������ 
	
}List;

int main(){
	//������ 
	List *Head = (List*)malloc(sizeof(List));
	Head->data =0;
	Head->next = NULL;
	
	List *Node1 = (List*)malloc(sizeof(List));
 
	Node1->data = 1;
	Head->next = Node1;
	Node1->next = NULL;
	
	List *Node2 = (List*)malloc(sizeof(List));
	Node2->data = 2;
	Node1->next = Node2;
	Node2->next = NULL;
	
	List *Node3 = (List*)malloc(sizeof(List));
	Node3->data = 3;
	Node2->next = Node3;
	Node3->next = NULL;

	List *Tail = (List*)malloc(sizeof(List));
	Tail->data = 4;
	Node3->next = Tail;
	Tail->next = NULL;	
	
	List *prt; //��¿� ������ 
	prt = Head; // ������  prt��  Head�� �Ҵ��ߴ� �����޸� �ּ� �Ҵ� 
	
	while(prt != NULL){
		printf("%d ",prt->data);
		prt = prt->next;
		if(prt != NULL){
			printf("->");
		}
	} 
}
