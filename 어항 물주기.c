#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int level;
int arrayFish[6];
int * cursor;			// �� ������ ����Ű�� ����
int i;                 
int num;                   // ���� ä�� ���� ��ȣ (����� �Է�)
long totalElapsedTime = 0; // �� ����ð�
long startTime = 0;        // ���� ���۽ð�

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
    long prevElapsedTime = 0;  // ���� ����ð� (�ֱٿ� ���� �� �ð� ����)

    initData();

    cursor = arrayFish;        // cursor[0], cursor[1], ...

    startTime = clock();       // ����ð��� millisecond(ms, 1000���� 1��) ������ ��ȯ

    while (1)                  // ���ѹݺ�
    {
        printFishes();	// ���� ��� 
     	
		selct();	// ���� ���� 
       
        prevElapsedTime = timedecrease(prevElapsedTime);	// ����� �ð��� �����ð����� �Ҵ� 
        
        decreaseWater(prevElapsedTime); // ���ߵ� ��ŭ ���� ���ҽ�Ű�� 
		
       	water();	// ���ֱ� 

    	levelup();	// ������ 

		check(); // ����� ���� Ȯ�� 
		
        // while ���� �ݺ��� ������ �������� ���� �ð� ����ϱ�
        // prevElapsedTime �̹� �� ���� ���߱� ������ ���⼭ ������Ʈ �ص� ���� ����.
        prevElapsedTime = totalElapsedTime;
    }

    return 0;
}

void initData()
{
    level = 1;                 // ���� ���� ���� (1-5)

    for (i = 0; i < 6; i++)
    {
        arrayFish[i] = 100;     // ���� ���� ������ 
    }
}

void printFishes()
{
    printf("\n");
    printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
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
        arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3�� ���̵� ������

        // ���� �ּҷ��� 0��.
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
            return 1; // �� True
    }

    return 0;
}

void selct(){
	
	   printf("�� �� ���׿� ���� �ֽðھ��? ");
        scanf("%d", &num);

        // �Է°� üũ
        if (num < 1 || num > 6)
        {
            printf("\n�Է°��� �߸��Ǿ����.\n");
            
           	 printFishes();	// ���� ��� 
			  selct();	// ��ȣ�� 
        }
	
}

long timedecrease(long prevElapsedTime){
	
	 // ���� �� ����ð�

        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;

        printf("���� �� ����ð�: %ld ��\n", totalElapsedTime);

        // ���������� ���� �� ���ķ� �帥 �ð�
        // �帥 �ð����� ���ߵ� ���� ���� �����ϱ� ����.
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("���������� ���� �� ���ķ� �帥 �ð�: %ld ��\n", prevElapsedTime);
        return prevElapsedTime;
}

void water(){
	
	 	// ����ڰ� ������ ���׿� ���ֱ�
        // 1. ������ ���� 0�̸�? ����� �̹� ���. ���� �� ���� ����.
        if (cursor[num-1] <= 0)
        {
            printf("%d �� ������ �̹� ���. �� ���� ����.\n", num);
        }
        // 2. ������ ���� ���� 0�� �ƴϸ� ���� ��. ��, ���� ���� ���� 100 ���� �ʰ� �ؾ���.
        else if (cursor[num-1] + 1 <= 100)
        {
            // �� �ֱ�
            printf("%d �� ���׿� ���ֱ�\n\n", num);
            cursor[num-1] += 1;
        }
}

void levelup(){
	
	// ������ ���࿩�� Ȯ�� (20�ʸ��� ������ ����)
        if (totalElapsedTime / 20 > level - 1)
        {
            level += 1;
            printf(" *** �� ������! ���� %d �������� %d ������ ���׷��̵� ***\n\n", level-1, level);

            // ��������: 5
            if (level == 5)
            {
                printf("\n\n�����մϴ�. �ְ����� �缺�Ͽ���! ���� ����!\n\n");
                exit(0);
            }
        }
}

void check(){
	
	// ����Ⱑ �׾����� Ȯ���ϱ�
        if (checkFishAlive() == 0)
        {
            // ��� ����� ��� ���
            printf("��� ����� ��� �Ф�\n");
            exit(0);
        }
        else
        {
            printf("����� ���� ��� ����!\n");
        }
}
