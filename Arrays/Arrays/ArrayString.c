#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_ssss()
{
	//문자열 배열

	
	/*
	char name[20];
	printf("이름\n");
	scanf("%s\n", name);
	printf(" 이름 %s\n", name);


	int age;
	printf("몇살");
	scanf("%d\n", &age);

	printf("나이 %d", age);

	*/

	//배열의 이름은 배열의 시작 주소이다.

	int arr[] = { 10 , 20 , 30, 40 };

	printf("%x, %x, %x", arr, arr + 1, arr + 2); //%x는 메모리의 주소를 출력함(16진수)
	//ec4ff558, ec4ff55c, ec4ff560 ==> 16진수는 4씩 올라감 ( 8 12(c) 16(0)
	//10 a / 11 b / 12 c / 13 d / 14 e / 15 f / 16 0
	// &arr[0] = arr / &arr[1] = arr + 1


	return 0;
}