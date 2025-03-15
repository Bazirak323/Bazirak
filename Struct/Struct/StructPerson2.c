#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>









//구조체 정의
typedef struct
{
	char name[20];
	int age;
	float height;



}Person;




int mainzSDCxvbn()
{
	//구조체 변수 선언
	Person p1;  //type로 선언했을 경우 이렇게만 적는다.

	strcpy(p1.name, "임꺽정");
	p1.age = 11;
	p1.height = 165.5f;

	printf("이름 : %s, 나이 : %d, 키 : %.1f\n", p1.name, p1.age, p1.height);














	return 0;
}