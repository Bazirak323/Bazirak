#include <stdio.h>
int x = 1; // ����(��rrrrr�ι�) ����
int add10();
int mainddd() {
	int value = add10(); // ��������

	printf("%d", value);

	return 0;
}

int add10() {
	
	x = x + 10;

	return x;

}