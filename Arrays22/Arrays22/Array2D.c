#include <stdio.h>


int main() {

	//������ �迭 ����
	int a[2][2];

	a[0][0] = 1;
	a[0][1] = 2;
	a[1][0] = 3;
	a[1][1] = 4;
	int i, o;

	int counting = 0;

	for (i = 0; i < 2; i++)
	{
		for (o = 0; o < 2; o++)
		{
			printf("a[%d][%d] =%d\n", i, o, a[i][o]);
		}

	}

	printf("\n\n===============================================\n\n");
	int arr[3][2] = {
		{75, 80},
		{ 85, 95 },
		{ 90, 100 }
	};

	int sum = 0; //����
	double average = 0.0; //���
	
	for (int i = 0; i < 3; i++)
	{
		for (int o = 0; o < 2; o++)
		{
			printf("a[%d][%d] = %d\n\n", i+1, o+1, arr[i][o]);
		}

	}


	//��ü ��� ���ϱ�
	for (int i = 0; i < 3; i++)
	{
		for (int o = 0; o < 2; o++)
		{
			sum += arr[i][o];
			counting++;
		}

	}
	printf("������ %d�Դϴ�.", sum);


	average = (double)sum / counting;

		printf("%.1lf", average);


	return 0;
}