#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//시험 구조체
typedef struct
{	//과목별 점수 및 평균
	int math;
	int eng;
	double avg;







}Score;

//학생 구조체
typedef	struct
{	//학번, 이름, 성적 ㄷㄷㄷ
	int number;
	char name[20];
	Score score;


}Student;


void showStudentInfo(Student st)
{

	printf("이름 : %s, 학번 : %d, 수학점수 : %d, 영어점수 : %d", st.name, st.number, st.score.math, st.score.eng);
	printf("   평균 : %.1f", st.score.avg);

}

int main_kkkknnnnnnnnknnkkn()
{
	//구조체 변수 선언
	Student s1;

	s1.number = 10;
	strcpy(s1.name, "임꺽정");
	s1.score.math = 96;
	s1.score.eng = 99;
	s1.score.avg = (double)(s1.score.eng + s1.score.math) / 2;
	

	showStudentInfo(s1);

	return 0;
}