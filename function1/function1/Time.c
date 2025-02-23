#include <stdio.h>
#include <time.h> //
#include <Windows.h> //sleep 함수


//시간 함수 - time()
int main_ttttime() {


	time_t now;    //time_t 자료형
	now = time(NULL); // 이 부분은 그냥 외우기

	int boon;

	boon = (now / 60);

	int si;

	si = (boon / 60);

	int il;
	il = (si / 24);

	int year;

	year = (il / 365);

	printf("%ld년\n", year);
	//1970년 1월 1일을 기준으로 시간을 세고 있다.
	time_t end, start;
	time(&start);

	for (int i = 1; i <= 100000000; i++) {
		printf("%d\n", (i / 1000));
		Sleep(0.000001);

	}
	time(&end);
	printf("수행시간 : %ld\n", (end - start));


	return 0;
}