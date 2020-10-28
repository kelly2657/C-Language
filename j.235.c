#include <stdio.h>
int cnt = 0;
void ret(int x){
	if(x == 1){
		printf("%d",cnt);
	}
	else if(x%2==0){
		cnt ++;
		ret(x/2);
	}
	else if(x%2 != 0){
		cnt++;
		ret(x/3);
	}
	

}
int main(){
	int num;
	scanf("%d",&num);
	ret(num);
	return 0;
}
