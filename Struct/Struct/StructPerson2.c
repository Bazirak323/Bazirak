#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>









//����ü ����
typedef struct
{
	char name[20];
	int age;
	float height;



}Person;




int mainzSDCxvbn()
{
	//����ü ���� ����
	Person p1;  //type�� �������� ��� �̷��Ը� ���´�.

	strcpy(p1.name, "�Ӳ���");
	p1.age = 11;
	p1.height = 165.5f;

	printf("�̸� : %s, ���� : %d, Ű : %.1f\n", p1.name, p1.age, p1.height);














	return 0;
}