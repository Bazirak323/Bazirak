#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];   //����ü�� �ʱ�ȭ�� ���� �ʴ´�.
	int age;
	float height;
};


int main_streqweqeq()
{/*
	struct Person p1;
	//��� ������ ����(��(.) �����ڸ� ���)  
	strcpy(p1.name, "���İ�");
	//p1.name = "���İ�"; ������ü�� �̷��� ������.
	p1.age = 11;
	p1.height = 165.7f;

	*/
	
	struct Person p1 = { "���İ�", 11, 165.7f };


	struct Person p[3] = {
		{"Ŀ�Ǹ�", 15, 131.1},
		{"�ʹ�", 12, 131.4 },
		{"����", 131, 222.6}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("�̸� - %s, ���� : %d, Ű : %.1f\n", p[i].name, p[i].age, p[i].height);

	}


	return 0;
}