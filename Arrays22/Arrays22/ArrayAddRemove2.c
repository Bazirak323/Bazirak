#include <stdio.h>
#define MAX_LEN 4	//���

int main_tihi() 
{
	//������ �迭 ����
	int carts[MAX_LEN];
	int idxOfCarts = 0;

	//��� ����


	carts[idxOfCarts++] = 80;
	carts[idxOfCarts++] = 79;
	carts[idxOfCarts++] = 67;
	carts[idxOfCarts++] = 78;
	

			// carts[0] + 1 == carts[1];

	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];

	

	for (int i = 0; i < idxOfCarts; i++)
	{
		printf("%3d", carts[i]);

	}



	//�ݺ����� ����ؼ� �Է� �ޱ�


	while (1)
	{

		printf("���� �Է� : ");
			scanf_s("%d", &carts[idxOfCarts++]);
			if (idxOfCarts >= MAX_LEN)
			{
				puts("�� �̻� �߰��� �� �����ϴ�.");
				return; //�ݺ��� Ż��(break�� �ȵ�)
			}
	}
	//��ü ���
	for (int i = 0; i < idxOfCarts; i++)
	{
		printf("%3d", carts[i]);

	}




}