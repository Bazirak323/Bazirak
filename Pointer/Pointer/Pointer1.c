#include <stdio.h>


int main_ppppppointer()
{
	int n = 3;


	//������ ������ ���� - ������ �޸� ����(�ּ�)�� �����ѴپƾƤ��Ƥ�
	int* pn = &n; // *�� �޸� �ּҸ� ������


	printf("������ �� : %d\n", n);
	printf("������ �ּ� : %x\n", &n);

	printf("������(����)�� �� : %x\n", pn);
	printf("�������� �ּ� : %x\n", &pn);
	printf("�����Ͱ� ����Ű�� ������ �� : %d\n", *pn);


	//�ڷ����� ũ��
	//�Ϲݺ��� - ������(4b) ������(1b), �Ǽ���(8b)

	//������ - ��� 8b��

	printf("������ �ڷ��� ũ�� : %dByte\n", sizeof(n));
	printf("������ ������ �ڷ��� ũ�� : %dByte\n", sizeof(pn));

	printf("\n\n\n=========================================================================\n\n\n");

	//������ ����
	char c;
	char* pc;

	c = 'a';

	pc = &c;

	printf("%c\n", c);
	printf("%x\n", &c);
	printf("%x\n", pc);
	printf("%c\n", *pc);
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(pc));



	return 0;













}