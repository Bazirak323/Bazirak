#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_read1() 
{	//���� ������ ���� ����
	FILE* fp;
	int ch;
	fp = fopen("out.txt", "r");
	if (fp == NULL)
	{
		printf("���� ����");
		return -1;

	}



	//���� �б�
	//�� ���� ��-��
	ch = fgetc(fp); //fgetc�� int�� ��ȯ�� �ϱ� ������ 
	printf("%c", ch);


	//��� ���� ��--��
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF) {
			break;

		}

		printf("%c", ch);

	}






	fclose(fp);

	return 0;
}