#include <stdio.h>

int main_Arrays_2() {
	//요소가 다섯개인 정수형 배열  스코어 선언
	int score[] = { 85, 87, 50, 60, 30 };

	//특정 요소에 접근- 조회


	//요소 수정
	score[2] = 95;

	//요소 추가

	//요소의 합계
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