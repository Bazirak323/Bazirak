#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//성적 관리 프로그램
typedef struct
{
	int math;		//솩
	int eng;		//ㅕㅓ



}Score;


typedef struct
{
	int number;	//학번
	char name[20];	//이름
	Score score; //성적 구조체 변수



}Student;
void showStudentInfo(Student st);


int main() 
{
	Student s[3]; //학생 구조체 변수 3명 선언
	int total[2] = { 0, 0 }; // 수학이랑 영어의 총점 저장 배열
	double avg[2] = { 0, 0 };

	printf("\n\n<===========성적 관리 프로그램============>\n\n");

	for (int i = 0; i < 3; i++)
	{
		printf("\n학번 입력 :  ");
		scanf_s("%d", &s[i].number);   //scanf_s를 쓸 때는 주소로 적어야 한다.
		printf("\n이름 입력 :  ");
		scanf_s("%s", s[i].name, sizeof(s[i].name)); //배열이면 또 안 적음
									//앞에 있는 거 그대로 적는다.
		printf("\n수학점수 입력 :  ");
		scanf_s("%d", &s[i].score.math);
		printf("\n영어점수 입력 :  ");
		scanf_s("%d", &s[i].score.eng);
	
	
	}			
	for (int i = 0; i < 3; i++)
	{

		total[0] = total[0] + s[i].score.math; // 수학 총점
		total[1] = total[1] + s[i].score.eng; // 영어 총점
		

	}
	avg[0] = (double)total[0] / 3;
	avg[1] = (double)total[1] / 3;


	printf("\n\n<===========결산============>\n\n");

	for (int i = 0; i < 3; i++)
	{	
		printf("%d번째 학생  ==>  ", i + 1);
		showStudentInfo(s[i]);
	}

	printf("\n\n수학의 총점 : %d, 영어의 총점 : %d\n\n", total[0], total[1]);
	printf("\n\n수학의 평균 : %.1lf, 영어의 평균 : %.1lf\n\n", avg[0], avg[1]);

	//exe 파일 유지시키는 법(안 꺼지게 하는 법)
	system("pause");
	














	return 0;
}


void showStudentInfo(Student st)
{

	printf("학번 : %d, 이름 : %s\n                수학 : %d, 영어 : %d\n\n",
		st.number, st.name, st.score.math, st.score.eng);



}