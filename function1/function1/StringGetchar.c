#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main_fff() {
	char c1, c2, c3;

	//���� �� �� �Է��ϴ� ��
	/*
	printf("�Է��Է�\n");
	c1 = getchar();	//���ۿ��� \n�� ��������
	//buffer - �ӽñ�����
	while (getchar() != '\n'); // \n�� ���������� ��ɾ� 
	c2 = getchar();					//�̷��� ���� �ܾ �Է��� �� ����
	while (getchar() != '\n');
	c3 = getchar();
	*/



	char name[20];
	int age;
	printf("�̸�   ");
	fgets(name, sizeof(name), stdin);
	  //���� ���� ����
	printf("����   ");
	scanf_s("%d", &age);
	
	printf("�̸� : %s\n���� : %d", name, age);


	return 0;
}