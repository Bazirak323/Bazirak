#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//���� ���� ���α׷�
typedef struct
{
	int math;		//��
	int eng;		//�Ť�



}Score;


typedef struct
{
	int number;	//�й�
	char name[20];	//�̸�
	Score score; //���� ����ü ����



}Student;
void showStudentInfo(Student st);


int main() 
{
	Student s[3]; //�л� ����ü ���� 3�� ����
	int total[2] = { 0, 0 }; // �����̶� ������ ���� ���� �迭
	double avg[2] = { 0, 0 };

	printf("\n\n<===========���� ���� ���α׷�============>\n\n");

	for (int i = 0; i < 3; i++)
	{
		printf("\n�й� �Է� :  ");
		scanf_s("%d", &s[i].number);   //scanf_s�� �� ���� �ּҷ� ����� �Ѵ�.
		printf("\n�̸� �Է� :  ");
		scanf_s("%s", s[i].name, sizeof(s[i].name)); //�迭�̸� �� �� ����
									//�տ� �ִ� �� �״�� ���´�.
		printf("\n�������� �Է� :  ");
		scanf_s("%d", &s[i].score.math);
		printf("\n�������� �Է� :  ");
		scanf_s("%d", &s[i].score.eng);
	
	
	}			
	for (int i = 0; i < 3; i++)
	{

		total[0] = total[0] + s[i].score.math; // ���� ����
		total[1] = total[1] + s[i].score.eng; // ���� ����
		

	}
	avg[0] = (double)total[0] / 3;
	avg[1] = (double)total[1] / 3;


	printf("\n\n<===========���============>\n\n");

	for (int i = 0; i < 3; i++)
	{	
		printf("%d��° �л�  ==>  ", i + 1);
		showStudentInfo(s[i]);
	}

	printf("\n\n������ ���� : %d, ������ ���� : %d\n\n", total[0], total[1]);
	printf("\n\n������ ��� : %.1lf, ������ ��� : %.1lf\n\n", avg[0], avg[1]);

	//exe ���� ������Ű�� ��(�� ������ �ϴ� ��)
	system("pause");
	














	return 0;
}


void showStudentInfo(Student st)
{

	printf("�й� : %d, �̸� : %s\n                ���� : %d, ���� : %d\n\n",
		st.number, st.name, st.score.math, st.score.eng);



}