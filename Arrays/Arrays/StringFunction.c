#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h> //strlen(문자열의 길이를 세는 법)

int main_munmun()
{

	//문자열의 갯수 세는 법

	char msg1[] = "gooddddddddddd";
	char msg2[20];


	int len = strlen(msg1);

	printf("%d\n", len);
					//strcpy(복사하려는 문자ㅓ열, 원본 문자열)
	printf("%s\n", strcpy(msg2, msg1));


	//문자열의 비교 - strcmp(문자열 1, 문자열 2) -다르면 결과가 1, 같으면 0)
	char greet1[] = "hello";
	char greet2[20];
	printf("문자열을 입력하세요 : ");

	scanf_s("%s", greet2, sizeof(greet2));

	if (strcmp(greet1, greet2) == 0)
	{
		printf("일치일치\n");

	}
	else
	{
		printf("노일치노일치\n");


	}

	printf("%d\n", strcmp(greet1, greet2));




	return 0;
}