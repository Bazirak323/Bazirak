#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{	//���� ���� �� ���
	int math;
	int eng;

}Score;

//�л� ����ü
typedef	struct
{	//�й�, �̸�, ���� ������
	int number;
	char name[20];
	Score score;


}Student;

int main()
{

	Student s[3];


	for (int i = 0; i < 3; i++)
	{

		printf("�й� �Է� :    ");
		scanf_s("%d", &s[i].number);


	}

	for (int i = 0; i < 3; i++)
	{
		printf("�й� %d\n", s[i].number);
	}




	return 0;
}