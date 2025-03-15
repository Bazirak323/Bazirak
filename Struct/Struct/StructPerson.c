#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];   //구조체는 초기화를 하지 않는다.
	int age;
	float height;
};


int main_streqweqeq()
{/*
	struct Person p1;
	//멤버 변수에 접근(점(.) 연산자를 사용)  
	strcpy(p1.name, "알파고");
	//p1.name = "알파고"; ㄴ구조체는 이렇게 적느낟.
	p1.age = 11;
	p1.height = 165.7f;

	*/
	
	struct Person p1 = { "알파고", 11, 165.7f };


	struct Person p[3] = {
		{"커피를", 15, 131.1},
		{"너무", 12, 131.4 },
		{"많이", 131, 222.6}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("이름 - %s, 나이 : %d, 키 : %.1f\n", p[i].name, p[i].age, p[i].height);

	}


	return 0;
}