#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>



int main_hbgbf() {

	//rand() - 난수 생성(무작위 숫자) ====rand를 하려면 srand를 먼저 해야한다.
	srand(time(((void*)0)));	//seed값 생성
					//시간이 흐르면서 매번 seed가 바뀜
	
	int rndVal;
	int coin, dice;

	rndVal = rand();

	printf("%d\n", rndVal);





	coin = rand() % 2;
	printf("동전 : %d\n", coin);

	if (coin == 0)
	{
		printf("앞면\n");
	}
	else
	{
		printf("뒷면\n");
	}

	dice = rand() % 6 + 1;

	//주사위 10번
	for (int i = 0; i <= 10; i++)
	{
		dice = rand() % 6 + 1;
		printf("주사위 : %d\n", dice);

	}

	//사계절 배열

	char season[][5] = { "봄", "여름", "가을", "겨울" };

	int rndIdx = 0;

	rndIdx = rand() % 4;


	printf("%s\n", season[rndIdx]);








	char *seasoning[] = { "봄", "여름", "가을", "겨울"};

	int size = sizeof(seasoning) / sizeof(seasoning[0]);
	rndIdx = rand() % 4;
	printf("%s\n", seasoning[rndIdx]);









	return 0;
}