#include <stdio.h>

int main_MUNJAYEOL()
{
	char c1, c2, c3;
	c1 = 's'; //�� ���ڴ� Ȧ����ǥ
	c2 = c1 + 1;
	c3 = c1 - 1; // c���� �ѱ��� ����Ϸ��� �迭�� ������ ��
	char c4[] = "c���� �ѱ��� ����Ϸ��� �迭�� �ʿ���";


	char a[52];
	char A[52];
	printf("A");
	char ch = 'B';
	for (int i = 0; i < 26; i++)
	{
		a[i] = ch;
		ch++;
			printf("%100c", a[i]); // �� ĭ ������
	}









	return 0;
}