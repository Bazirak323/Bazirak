#define _CRT_SECURE_NO_WARNINGS //컴퓨터에 있는 무언가를 스캔해야 할 때 사용함
#include <stdio.h>
#include <time.h>


//날짜와 시간 출력
int main_mon()
{
	//현재 시간을 알기 위한 time_t

	time_t ct;
	struct tm* now; // tm 구조체의 객체(now) 생성

	time(&ct);
	now = localtime(&ct); // 날짜 포맷
			//날짜를 현지 시간으로 맞춘다(컴퓨터를 스캔할 필요가 있음)


	printf("현재 날짜는 %d년 %d월 %d일입니다.\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);

	printf("현재 시간은 %d시 %d분 %d초입니다.\n", now->tm_hour, now->tm_min, now->tm_sec);




	//현재 요일 0-일. 1-월, 2-화 ..... 
	printf("오늘은 ");
	switch (now->tm_wday)
	{
	case 0:
		printf("일요일");
		break;
	case 1:
		printf("월요일");
		break;
	case 2:
		printf("화요일");
		break;
	case 3:
		printf("수요일");
		break;
	case 4:
		printf("목요일");
		break;
	case 5:
		printf("금요일");
		break;
	case 6:
		printf("토요일");
		break;
	}
	printf("입니다.");

	return 0;
}