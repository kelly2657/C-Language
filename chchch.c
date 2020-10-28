#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �ƺ��� ��Ӹ� ����: �߸��� ã��

void game_setting(int treatment);

int main()
{
	srand(time(NULL));
	
	printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");

	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �� ���� �߸��� �� ���� (0 - 3)

	game_setting(treatment);

	printf("\n\n �߸����� �� ���ϱ��? ");
	scanf("%d", &answer);

	if (answer == treatment + 1)
	{
		printf("\n >> �����Դϴ�!\n");
	}
	else
	{
		printf("\n >> ��! Ʋ�Ⱦ��. ������ %d �Դϴ�.\n", treatment + 1);
	}
    return 0;
}

void game_setting_orig(int treatment)
{
	// �������� ������ �� ���� ����. 
	
	// ������� ����Ű�� ���� ���� ���� 2�� �Ǵ� 3���� ������ ���鼭 ����

	int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0; // �� ���ӿ� ������ �� ����

	// 3���� ��ȸ�� ��, ��, 3���� �߸��� ���� �õ�

	for (int i=1; i <= 3; i++)
	{
		int bottle[4] = {0, 0, 0, 0}; // �� 4��
		do {
			cntShowBottle = rand() % 2 + 2; // ������ �� ������ 2-3��
		} while (cntShowBottle == prevCntShowBottle); 

		prevCntShowBottle = cntShowBottle;

		int isincluded = 0; // ������ ���鿡 �߸��� ���� ����

		printf(" > %d ��° �õ�: ", i);

		// ������ �� ���� ����
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4; // 0 - 3

			// ���� ���õ��� ���� ���� ��츸 ����
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;

				if (randBottle == treatment)
				{
					isincluded = 1;  // ���Ե� �� ���
				}
			}
			else  // �̹� ���õ� ���� ��� j���� �ø��� �ʰ� �ٽ� �����ϱ� ����
			{
				j--;
			}
		}

		// ����ڿ��� ���� �����ֱ�
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
			{
				printf("%d ", k+1); 
			}
		}
		printf(" ������ �Ӹ��� �ٸ��ϴ�.\n\n");

		if (isincluded == 1)
		{
			printf(" >> ���� ! �Ӹ��� ����� !!\n");
		}
		else
		{
			printf(" >> ���� ! �Ӹ��� ���� �ʾ����.. �Ф�\n");
		}

		printf("\n ... ��� �Ϸ��� �ƹ� Ű�� �������� ...\n");
		getchar();  //�ƹ� ���� �Է��� ������ ���뵵
	}
}
