#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//���� ����ü
typedef struct
{	//���� ���� �� ���
	int math;
	int eng;
	double avg;







}Score;

//�л� ����ü
typedef	struct
{	//�й�, �̸�, ���� ������
	int number;
	char name[20];
	Score score;


}Student;


void showStudentInfo(Student st)
{

	printf("�̸� : %s, �й� : %d, �������� : %d, �������� : %d", st.name, st.number, st.score.math, st.score.eng);
	printf("   ��� : %.1f", st.score.avg);

}

int main_kkkknnnnnnnnknnkkn()
{
	//����ü ���� ����
	Student s1;

	s1.number = 10;
	strcpy(s1.name, "�Ӳ���");
	s1.score.math = 96;
	s1.score.eng = 99;
	s1.score.avg = (double)(s1.score.eng + s1.score.math) / 2;
	

	showStudentInfo(s1);

	return 0;
}