#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int level;
int arrayFish[6];
int * cursor;			// 각 어항을 가리키는 역할
int i;                 
int num;                   // 물을 채울 어항 번호 (사용자 입력)
long totalElapsedTime = 0; // 총 경과시간
long startTime = 0;        // 게임 시작시간

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();


void selct();
long timedecrease();
void water();
void levelup();
void check();


int main(void)
{
    long prevElapsedTime = 0;  // 직전 경과시간 (최근에 물을 준 시간 간격)

    initData();

    cursor = arrayFish;        // cursor[0], cursor[1], ...

    startTime = clock();       // 현재시각을 millisecond(ms, 1000분의 1초) 단위로 변환

    while (1)                  // 문한반복
    {
        printFishes();	// 어항 출력 
     	
		selct();	// 어항 선택 
       
        prevElapsedTime = timedecrease(prevElapsedTime);	// 경과한 시간을 이전시간으로 할당 
        
        decreaseWater(prevElapsedTime); // 증발된 만큼 물을 감소시키기 
		
       	water();	// 물주기 

    	levelup();	// 레벨업 

		check(); // 물고기 생사 확인 
		
        // while 문이 반복될 때마다 마지막에 물준 시간 기억하기
        // prevElapsedTime 이미 그 역할 다했기 때문에 여기서 업데이트 해도 문제 없음.
        prevElapsedTime = totalElapsedTime;
    }

    return 0;
}

void initData()
{
    level = 1;                 // 게임 시작 레벨 (1-5)

    for (i = 0; i < 6; i++)
    {
        arrayFish[i] = 100;     // 최초 어항 물높이 
    }
}

void printFishes()
{
    printf("\n");
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
    for (i = 0; i < 6; i++)
    {
        printf(" %4d ", arrayFish[i]);
    }
    printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
    for (i = 0; i < 6; i++)
    {
        arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3은 난이도 조절용

        // 물의 최소량은 0임.
        if (arrayFish[i] < 0)
        {
            arrayFish[i] = 0;
        }
    }
}

int checkFishAlive()
{
    for (i = 0; i < 6; i++)
    {
        if (arrayFish[i] > 0)
            return 1; // 참 True
    }

    return 0;
}

void selct(){
	
	   printf("몇 번 어항에 물을 주시겠어요? ");
        scanf("%d", &num);

        // 입력값 체크
        if (num < 1 || num > 6)
        {
            printf("\n입력값이 잘못되었어요.\n");
            
           	 printFishes();	// 어항 출력 
			  selct();	// 재호출 
        }
	
}

long timedecrease(long prevElapsedTime){
	
	 // 게임 총 경과시간

        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;

        printf("게임 총 경과시간: %ld 초\n", totalElapsedTime);

        // 마지막으로 물을 준 이후로 흐른 시간
        // 흐른 시간동안 증발된 물의 양을 측정하기 위함.
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("마지막으로 물을 준 이후로 흐른 시간: %ld 초\n", prevElapsedTime);
        return prevElapsedTime;
}

void water(){
	
	 	// 사용자가 지정한 어항에 물주기
        // 1. 어항의 물이 0이면? 물고기 이미 사망. 따라서 물 주지 않음.
        if (cursor[num-1] <= 0)
        {
            printf("%d 번 물고기는 이미 사망. 물 주지 않음.\n", num);
        }
        // 2. 어항의 물의 양이 0이 아니면 물을 줌. 단, 어항 물의 양이 100 넘지 않게 해야함.
        else if (cursor[num-1] + 1 <= 100)
        {
            // 물 주기
            printf("%d 번 어항에 물주기\n\n", num);
            cursor[num-1] += 1;
        }
}

void levelup(){
	
	// 레벨업 시행여부 확인 (20초마다 레벨업 수행)
        if (totalElapsedTime / 20 > level - 1)
        {
            level += 1;
            printf(" *** 축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level-1, level);

            // 최종레벨: 5
            if (level == 5)
            {
                printf("\n\n축하합니다. 최고레벨을 당성하였음! 게임 종료!\n\n");
                exit(0);
            }
        }
}

void check(){
	
	// 물고기가 죽었는지 확인하기
        if (checkFishAlive() == 0)
        {
            // 모든 물고기 모두 사망
            printf("모든 물고기 사망 ㅠㅠ\n");
            exit(0);
        }
        else
        {
            printf("물고기 아직 살아 있음!\n");
        }
}
