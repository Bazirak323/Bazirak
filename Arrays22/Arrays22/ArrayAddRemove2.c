#include <stdio.h>
#define MAX_LEN 4	//상수

int main_tihi() 
{
	//정수형 배열 생성
	int carts[MAX_LEN];
	int idxOfCarts = 0;

	//요소 저장


	carts[idxOfCarts++] = 80;
	carts[idxOfCarts++] = 79;
	carts[idxOfCarts++] = 67;
	carts[idxOfCarts++] = 78;
	

			// carts[0] + 1 == carts[1];

	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];

	

	for (int i = 0; i < idxOfCarts; i++)
	{
		printf("%3d", carts[i]);

	}



	//반복문을 사용해서 입력 받기


	while (1)
	{

		printf("점수 입력 : ");
			scanf_s("%d", &carts[idxOfCarts++]);
			if (idxOfCarts >= MAX_LEN)
			{
				puts("더 이상 추가할 수 없습니다.");
				return; //반복문 탈출(break도 안됨)
			}
	}
	//전체 출력
	for (int i = 0; i < idxOfCarts; i++)
	{
		printf("%3d", carts[i]);

	}




}