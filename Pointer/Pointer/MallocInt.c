#include <stdio.h>
#include <stdlib.h>

int main_malloc() 
{
	/*
	//정수형 배열의 크기가 4인 정수형 배열 선어ㅓ언
	int n[4];
	//배열에 값을 저장
	n[0] = 10;
	n[1] = 20;
	n[2] = 30;
	n[3] = 40;
	

	for (int i = 0; i < 4; i++)
	{

		printf("%d\n", n[i]);
	}

	*/






	//동적 할당당당당당당당당당당당당당당당당
	int* pn = (int *)malloc(sizeof(int) * 30); //4바이트 * 4 = 16바이트



	//저장

	for (int i = 0; i < 7; i++)
	{

		pn[i] = i * 2;
	}
	for (int i = 0; i < 7; i++)
	{

		printf("%d\n",60*pn[i]);
	}


	free(pn);
	//메모리 해제(안되면 계속 실행된다)

	return 0;
}