#include <stdio.h>
#include <string.h>

typedef struct cafe{
	char kind[20];
	char name[20];
	int price;
	
}cafe;

int main(){
	cafe menu[5];
	strcpy(menu[0].kind,"coffee");
	strcpy(menu[0].name,"�Ƹ޸�ī��");
	menu[0].price = 3000; 
	strcpy(menu[1].kind,"beverage");
	strcpy(menu[1].name,"������");
	menu[1].price = 4000;
	strcpy(menu[2].kind,"coffee");
	strcpy(menu[2].name,"ī���");
	menu[2].price = 4000;
	strcpy(menu[3].kind,"coffee");
	strcpy(menu[3].name,"ī���ī");
	menu[3].price = 5000;
	strcpy(menu[4].kind,"bread");
	strcpy(menu[4].name,"��ī��");
	menu[4].price = 4000;
	int i;
	for(i=0;i<5;i++){
		printf("%s %s %d\n",menu[i].kind,menu[i].name,menu[i].price);
	}
	int num;
	int pay;
	int a;
	
	printf("������ �ֹ��Ͻðڽ��ϱ�?\n");
	scanf("%d %d",&num,&a);
	printf("%s�� %d�� �����߽��ϴ�.\n",menu[num-1].name,a);
	printf("%d�� �Դϴ�.\n",menu[num-1].price*a);
	scanf("%d",&pay);
	if(pay < menu[num-1].price*a){
		printf("%d�� ���ڶ��ϴ�.",menu[num-1].price*a-pay);
	} 
	else{
		printf("�Ž�����: %d",pay-menu[num-1].price*a);
	} 
	return 0;
}
