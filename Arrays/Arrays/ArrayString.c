#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_ssss()
{
	//���ڿ� �迭

	
	/*
	char name[20];
	printf("�̸�\n");
	scanf("%s\n", name);
	printf(" �̸� %s\n", name);


	int age;
	printf("���");
	scanf("%d\n", &age);

	printf("���� %d", age);

	*/

	//�迭�� �̸��� �迭�� ���� �ּ��̴�.

	int arr[] = { 10 , 20 , 30, 40 };

	printf("%x, %x, %x", arr, arr + 1, arr + 2); //%x�� �޸��� �ּҸ� �����(16����)
	//ec4ff558, ec4ff55c, ec4ff560 ==> 16������ 4�� �ö� ( 8 12(c) 16(0)
	//10 a / 11 b / 12 c / 13 d / 14 e / 15 f / 16 0
	// &arr[0] = arr / &arr[1] = arr + 1


	return 0;
}