#include <stdio.h>

// ��ȯ �ڷ��� - int, �Ű����� - int


int square(int x)
{
	return x * x;

}
int main_2() // square�� ȣ���� �� main, main�� ȣ���ϴ� �� �ü����. �� �� �ٴ� �ٴٴ� �� �ٴ�
{

	int value = square(1557);
	printf("����� : %d\n", value);
	return 0;
}
