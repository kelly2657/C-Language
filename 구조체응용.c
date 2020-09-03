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
	strcpy(menu[0].name,"아메리카노");
	menu[0].price = 3000; 
	strcpy(menu[1].kind,"beverage");
	strcpy(menu[1].name,"핫초코");
	menu[1].price = 4000;
	strcpy(menu[2].kind,"coffee");
	strcpy(menu[2].name,"카페라떼");
	menu[2].price = 4000;
	strcpy(menu[3].kind,"coffee");
	strcpy(menu[3].name,"카페모카");
	menu[3].price = 5000;
	strcpy(menu[4].kind,"bread");
	strcpy(menu[4].name,"모카번");
	menu[4].price = 4000;
	int i;
	for(i=0;i<5;i++){
		printf("%s %s %d\n",menu[i].kind,menu[i].name,menu[i].price);
	}
	int num;
	int pay;
	int a;
	
	printf("무엇을 주문하시겠습니까?\n");
	scanf("%d %d",&num,&a);
	printf("%s을 %d개 선택했습니다.\n",menu[num-1].name,a);
	printf("%d원 입니다.\n",menu[num-1].price*a);
	scanf("%d",&pay);
	if(pay < menu[num-1].price*a){
		printf("%d원 모자랍니다.",menu[num-1].price*a-pay);
	} 
	else{
		printf("거스름돈: %d",pay-menu[num-1].price*a);
	} 
	return 0;
}
