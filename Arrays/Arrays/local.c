#include <stdio.h>
//���� ���� ���� �ֱ�(scope)
//��� �ȿ��� �ʱ�ȭ�� �� �����Ǹ� ����� ����� �Ҹ��Ѵ�.

int sum10();
int main_sumsum()
{

	int value = sum10();

	printf("%d", value);




	return 0;
}

int sum10()
{
	static int x = 1;

	x = x + 10;

	return x;

}