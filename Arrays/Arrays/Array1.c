#include <stdio.h>

int main_pyeonggyun()
{
	//
	int kor[4] = { 63, 90, 90, 70 };
	int hakki[] = { 0 };
	int sum = 0;
	int pyeong;
	kor[1] = 40;
	pyeong = (kor[0] + kor[1] + kor[2] + kor[3]) / 4; //가장 맨 앞의 변수는 0번이다.
	double avg = 0.0;

	for (int i = 0; i < 4; i += 1)
	{
		sum = sum + kor[i];
		printf("%d번째 시험은 %d점이다.\n", i + 1, kor[i]);
		

	}
	//수정
	avg = (double)sum / 4; // 강제 형변환(int를 double로 강제로 바꾼다.

	printf("시험점수의 평균은 %.2lf점이다.", avg);    // .2 소수점 둘째자리까지 나오기
													// lf 실수(소수점 유)로 출력하기













	return 0;
}