#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_wr2() 
{

	//�ƽ�Ű(�ڵ尪) ���� ����
	FILE* fp;
	fp = fopen("ascii.txt", "w");
	if (fp == NULL)
	{
		printf("���� ����");
		return -1;

	}

	//���� ����
	for (int i = 32; i < 128; i++)
	{
		if (i % 10 == 0)
		{
			fputc('\n', fp); //���� 10���� �ٹٲ� �� ��


		}
		fputc(i, fp); // �ѹ��� ����
		fputc('\t', fp);

	}











	fclose(fp);

	return 0;
}