#include <stdio.h>


int main() {

	//이차원 배열 선언
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

	int sum = 0; //총점
	double average = 0.0; //평균
	
	for (int i = 0; i < 3; i++)
	{
		for (int o = 0; o < 2; o++)
		{
			printf("a[%d][%d] = %d\n\n", i+1, o+1, arr[i][o]);
		}

	}


	//전체 요소 더하기
	for (int i = 0; i < 3; i++)
	{
		for (int o = 0; o < 2; o++)
		{
			sum += arr[i][o];
			counting++;
		}

	}
	printf("총점은 %d입니다.", sum);


	average = (double)sum / counting;

		printf("%.1lf", average);


	return 0;
}