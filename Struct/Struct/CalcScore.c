#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{	//과목별 점수 및 평균
	int math;
	int eng;

}Score;

//학생 구조체
typedef	struct
{	//학번, 이름, 성적 ㄷㄷㄷ
	int number;
	char name[20];
	Score score;


}Student;

int main()
{

	Student s[3];


	for (int i = 0; i < 3; i++)
	{

		printf("학번 입력 :    ");
		scanf_s("%d", &s[i].number);


	}

	for (int i = 0; i < 3; i++)
	{
		printf("학번 %d\n", s[i].number);
	}




	return 0;
}