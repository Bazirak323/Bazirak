#include <stdio.h>
//지역 변수 생명 주기(scope)
//블록 안에서 초기화될 때 생성되며 블록을 벗어나면 소멸한다.

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