#include <stdio.h>
int x = 1; // 전역(글rrrrr로발) 변수
int add10();
int mainddd() {
	int value = add10(); // 지역변수

	printf("%d", value);

	return 0;
}

int add10() {
	
	x = x + 10;

	return x;

}