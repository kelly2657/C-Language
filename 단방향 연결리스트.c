#include <stdio.h>
//연결리스트 구조 정의 
typedef struct List{
	int data;
	struct List *next; //다음 노드 가르키는 포인터 
	
}List;

int main(){
	//헤드생성 
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
	
	List *prt; //출력용 포인터 
	prt = Head; // 포인터  prt에  Head에 할당했던 동적메모리 주소 할당 
	
	while(prt != NULL){
		printf("%d ",prt->data);
		prt = prt->next;
		if(prt != NULL){
			printf("->");
		}
	} 
}
