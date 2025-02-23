#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char city[20];

	int num = 10;
	printf("%d, %x\n", num, &num);
	int num1 = 10;
	printf("%d, %x\n", num1, &num1);


	int score[] = { 80, 70, 90 };

	printf("도시 입력: ");
	scanf_s("%s", city, sizeof(city));
	printf("%s시\n", city);




	return 0;
}