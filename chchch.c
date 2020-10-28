#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 아빠는 대머리 게임: 발모제 찾기

void game_setting(int treatment);

int main()
{
	srand(time(NULL));
	
	printf("\n\n === 아빠는 대머리 게임 === \n\n");

	int answer; // 사용자 입력값
	int treatment = rand() % 4; // 네 개의 발모제 중 산택 (0 - 3)

	game_setting(treatment);

	printf("\n\n 발모제는 몇 번일까요? ");
	scanf("%d", &answer);

	if (answer == treatment + 1)
	{
		printf("\n >> 정답입니다!\n");
	}
	else
	{
		printf("\n >> 땡! 틀렸어요. 정답은 %d 입니다.\n", treatment + 1);
	}
    return 0;
}

void game_setting_orig(int treatment)
{
	// 무작위로 보여줄 병 개수 지정. 
	
	// 정답률을 향상시키기 위해 병의 수를 2개 또는 3개로 번갈아 가면서 지정

	int cntShowBottle = 0; // 이번 게임에 보여줄 병 개수
	int prevCntShowBottle = 0; // 앞 게임에 보여준 병 개수

	// 3번의 기회를 줌, 즉, 3번의 발모제 투여 시도

	for (int i=1; i <= 3; i++)
	{
		int bottle[4] = {0, 0, 0, 0}; // 병 4개
		do {
			cntShowBottle = rand() % 2 + 2; // 보여줄 병 개수는 2-3개
		} while (cntShowBottle == prevCntShowBottle); 

		prevCntShowBottle = cntShowBottle;

		int isincluded = 0; // 보여줄 병들에 발모제 포함 여부

		printf(" > %d 번째 시도: ", i);

		// 보여줄 병 종류 선택
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4; // 0 - 3

			// 아직 선택되지 않은 병인 경우만 선택
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;

				if (randBottle == treatment)
				{
					isincluded = 1;  // 포함된 것 기억
				}
			}
			else  // 이미 선택된 병인 경우 j값을 늘리지 않고 다시 선택하기 위해
			{
				j--;
			}
		}

		// 사용자에게 문제 보여주기
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
			{
				printf("%d ", k+1); 
			}
		}
		printf(" 물약을 머리에 바릅니다.\n\n");

		if (isincluded == 1)
		{
			printf(" >> 성공 ! 머리가 났어요 !!\n");
		}
		else
		{
			printf(" >> 실패 ! 머리가 나지 않었어요.. ㅠㅠ\n");
		}

		printf("\n ... 계속 하려면 아무 키나 누르세요 ...\n");
		getchar();  //아무 값을 입력할 때까지 대기용도
	}
}
