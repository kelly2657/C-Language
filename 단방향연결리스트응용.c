#include <stdio.h>

typedef struct List{
	int data;
	struct List *next;
	
}List;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int sum = 0;
	
	List *Node = (List*)malloc(sizeof(List)*n);
	for(i=0;i<n;i++){
		scanf("%d",&Node[i].data);
		sum = sum + Node[i].data;
		Node[i].next = &Node[i+1];
	}
	Node[n-1].next = NULL;
	printf("%d",sum);
}
