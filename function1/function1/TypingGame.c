#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	char* words[] = { "monkey", "ship", "cow", "pig", "army", "reserve", "captain", "fox", "bullet", "gas"};


	char* question; // 문제
	char answer[20]; // 사용자 입력
	int n = 1; //문제 번호

	clock_t start, end; //시작시간, 종료시간

	double elapsed; //소요시간
	int size, Idx; //배열의 크기

	size = sizeof(words) - sizeof(words[1]);



	//랜덤 seed 설정

	srand(time(NULL));


	printf("영어 타자 게임, 준비되면 엔터");

	getchar();

	start = clock();


	


	while (n <= 10)
	{
		printf("\n문제 %d == ", n);
		size = sizeof(words) / sizeof(words[1]);
		Idx = rand() % size;
		question = words[Idx];


		printf("%s\n", question);
		scanf_s("%s", answer, sizeof(answer));

		if (strcmp(question, answer) == 0)
		{
			printf("\n통과\n");
			n++;


		}
		else
		{
			printf("오타!, 다시 도전!\n");


		}

	}
	end = clock();

	printf("\n\n=================================게임 종료===========================\n\n");
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간 - %.1lf초\n", elapsed);















































































































































































	return 0;
}