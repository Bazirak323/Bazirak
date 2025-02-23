#include <stdio.h>

// 반환 자료형 - int, 매개변소 - int


int square(int x)
{
	return x * x;

}
int main_2() // square를 호출한 건 main, main을 호출하는 건 운영체제다. 다 다 다다 다다다 다 다다
{

	int value = square(1557);
	printf("결과값 : %d\n", value);
	return 0;
}
