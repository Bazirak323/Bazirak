#include <stdio.h>
#include <stdlib.h>

int main_malloc() 
{
	/*
	//������ �迭�� ũ�Ⱑ 4�� ������ �迭 ����þ�
	int n[4];
	//�迭�� ���� ����
	n[0] = 10;
	n[1] = 20;
	n[2] = 30;
	n[3] = 40;
	

	for (int i = 0; i < 4; i++)
	{

		printf("%d\n", n[i]);
	}

	*/






	//���� �Ҵ����������������
	int* pn = (int *)malloc(sizeof(int) * 30); //4����Ʈ * 4 = 16����Ʈ



	//����

	for (int i = 0; i < 7; i++)
	{

		pn[i] = i * 2;
	}
	for (int i = 0; i < 7; i++)
	{

		printf("%d\n",60*pn[i]);
	}


	free(pn);
	//�޸� ����(�ȵǸ� ��� ����ȴ�)

	return 0;
}