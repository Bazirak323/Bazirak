#include <stdio.h>

int main_Arrays_2() {
	//��Ұ� �ټ����� ������ �迭  ���ھ� ����
	int score[] = { 85, 87, 50, 60, 30 };

	//Ư�� ��ҿ� ����- ��ȸ


	//��� ����
	score[2] = 95;

	//��� �߰�

	//����� �հ�
	int total = 0;
	int n;

	printf("%d\n", score[0] + score[1]);


	for (n = 0; n < 5; n++)
	{
		total += score[n];



	}

	printf("%d\n", total);





	return 0;
}