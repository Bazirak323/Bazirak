#include <stdio.h>


int main_ppppppointer()
{
	int n = 3;


	//정수형 포인터 변수 - 변수의 메모리 번지(주소)를 저장한다아아ㅏ아ㅏ
	int* pn = &n; // *을 달면 주소를 저장함


	printf("변수의 값 : %d\n", n);
	printf("변수의 주소 : %x\n", &n);

	printf("포인터(변수)의 값 : %x\n", pn);
	printf("포인터의 주소 : %x\n", &pn);
	printf("포인터가 가리키는 변수의 값 : %d\n", *pn);


	//자료형의 크기
	//일반변수 - 정수형(4b) 문자형(1b), 실수형(8b)

	//포인터 - 모두 8b임

	printf("변수의 자료형 크기 : %dByte\n", sizeof(n));
	printf("포인터 변수의 자료형 크기 : %dByte\n", sizeof(pn));

	printf("\n\n\n=========================================================================\n\n\n");

	//문자형 변수
	char c;
	char* pc;

	c = 'a';

	pc = &c;

	printf("%c\n", c);
	printf("%x\n", &c);
	printf("%x\n", pc);
	printf("%c\n", *pc);
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(pc));



	return 0;













}