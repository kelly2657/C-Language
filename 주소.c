/*	
	scanf("%d", &n);
	
	& 주소값
	& : 앰퍼센트  
*/

#include <stdio.h>
int main(){
	
	int n;
	scanf("%d", &n); //  n의 메모리주소로 가서 값을 입력하고 그 값이 정수로 할당됨.
	 
	
	printf("%d", n);
	return 0;
}
