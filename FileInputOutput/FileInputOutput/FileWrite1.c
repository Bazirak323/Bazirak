#define _CRT_SECURE_NO_WARNINGS // fopen() ���� ����
#include <stdio.h>

int main_write()
{

	//���� ����ü ������ ����
	FILE* fp;

			//fopen(����, ���) : ���� ��� - w, �б� ��� - r(file open)
	fp = fopen("out.txt", "w");
	if (fp == NULL)
	{	//����(����) ó��
		printf("���� ���⿡ ������\n");
			return 1; // 0 -- ���� 1 or -1 -- ����
	}
	//�Ĥ��� ���� ( �� �ܾ�� fputc, ���� �ܾ�(�迭)�� fputs)
	fputs("apple\n", fp);
	fputs("���.\n", fp);
















	fclose(fp); //���� �ݱ� (file close) <<���� �������� �ݾƾ� �Ѵ�.

	return 0;
}