#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h> //strlen(���ڿ��� ���̸� ���� ��)

int main_munmun()
{

	//���ڿ��� ���� ���� ��

	char msg1[] = "gooddddddddddd";
	char msg2[20];


	int len = strlen(msg1);

	printf("%d\n", len);
					//strcpy(�����Ϸ��� ���ڤÿ�, ���� ���ڿ�)
	printf("%s\n", strcpy(msg2, msg1));


	//���ڿ��� �� - strcmp(���ڿ� 1, ���ڿ� 2) -�ٸ��� ����� 1, ������ 0)
	char greet1[] = "hello";
	char greet2[20];
	printf("���ڿ��� �Է��ϼ��� : ");

	scanf_s("%s", greet2, sizeof(greet2));

	if (strcmp(greet1, greet2) == 0)
	{
		printf("��ġ��ġ\n");

	}
	else
	{
		printf("����ġ����ġ\n");


	}

	printf("%d\n", strcmp(greet1, greet2));




	return 0;
}