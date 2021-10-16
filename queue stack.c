#include <stdio.h>

int stack[100];
int queue[100];
int cnt = 0;

struct linked_list{
	
	int data;
	linked_list *next;
	linked_list *prev;
	
};

linked_list *node1 = (linked_list*)malloc(sizeof(linked_list));

node1->data = 1;

linked_list *node2 = (linked_list*)malloc(sizeof(linked_list));

node1->next = node2;
node2->prev = node1;
void push(){		// [0] 5 1   
	int x;
	scanf("%d", &x);
	stack[cnt] = x;
	cnt++;
}
void pop(){
	cnt--;	// 
	
	for(i=1;i<cnt;i++){
		queue[i-1]  = queue[i];
	}
}
int main(){

	for(i=0;i<cnt;i++){
		printf("%d", stack[i]);
	}
	return 0;
}
