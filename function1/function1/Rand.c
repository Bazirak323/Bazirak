#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>



int main_hbgbf() {

	//rand() - ���� ����(������ ����) ====rand�� �Ϸ��� srand�� ���� �ؾ��Ѵ�.
	srand(time(((void*)0)));	//seed�� ����
					//�ð��� �帣�鼭 �Ź� seed�� �ٲ�
	
	int rndVal;
	int coin, dice;

	rndVal = rand();

	printf("%d\n", rndVal);





	coin = rand() % 2;
	printf("���� : %d\n", coin);

	if (coin == 0)
	{
		printf("�ո�\n");
	}
	else
	{
		printf("�޸�\n");
	}

	dice = rand() % 6 + 1;

	//�ֻ��� 10��
	for (int i = 0; i <= 10; i++)
	{
		dice = rand() % 6 + 1;
		printf("�ֻ��� : %d\n", dice);

	}

	//����� �迭

	char season[][5] = { "��", "����", "����", "�ܿ�" };

	int rndIdx = 0;

	rndIdx = rand() % 4;


	printf("%s\n", season[rndIdx]);








	char *seasoning[] = { "��", "����", "����", "�ܿ�"};

	int size = sizeof(seasoning) / sizeof(seasoning[0]);
	rndIdx = rand() % 4;
	printf("%s\n", seasoning[rndIdx]);









	return 0;
}