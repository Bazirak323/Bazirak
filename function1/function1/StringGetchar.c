#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main_fff() {
	char c1, c2, c3;

	//문자 한 개 입력하는 곳
	/*
	printf("입력입력\n");
	c1 = getchar();	//버퍼에는 \n이 남아있음
	//buffer - 임시기억장소
	while (getchar() != '\n'); // \n을 지워버리는 명령어 
	c2 = getchar();					//이래야 다음 단어를 입력할 수 있음
	while (getchar() != '\n');
	c3 = getchar();
	*/



	char name[20];
	int age;
	printf("이름   ");
	fgets(name, sizeof(name), stdin);
	  //버퍼 비우는 구문
	printf("나이   ");
	scanf_s("%d", &age);
	
	printf("이름 : %s\n나이 : %d", name, age);


	return 0;
}