#include <stdio.h>

int mai_pointer2()
{
	int a[4] = { 10, 20, 30, 40 };



	//정수형 포인터 배열
	int* pa;



	pa = a; // 배열 a의 주소 저장

/*	printf("a[0]의 값은 %d\n", a[0]);
	printf("a[0]의 주소는 %x\n", &a[0]);	   //둘이
	printf("배열의 이름 a의 값은  %x\n", a);//똑같다.



	printf("a[1]의 값은 %d\n", a[1]);
	printf("a[1]의 주소는 %x\n", &a[1]);	   //둘이
	printf("배열의 이름 a + 1의 값은  %x\n", a + 1);//똑같다.

	*/

	for (int i = 0; i < 4; i++)
	{
		printf("%d %x %x\n", pa[i], &pa[i], pa + i);		//배열 형식이나 값을 늘리는 식으로 가도 똑같다



	}


	//역참조 - 포인터가 가리키는 값
	printf("포인터 pa가 가리키는 메모리값 : %d\n", *pa);
	printf("포인터 pa + 1이 가리키는 메모리값 : %d\n", *(pa + 1));



	for (int i = 0; i < 4; i++)
	{
		printf("%d %d\n", pa + i, *(pa + i));

	}

	printf("\n\n ======================================================= \n\n");


	//문자열과 포인터


	char msg[] = "Good Luck";
	char* p = msg; //msg의 주소를 저장

	printf("%s\n", msg);

	printf("문자열의 크기 : %d\n", sizeof(msg));
	printf("문자열의 크기 : %d\n", sizeof(p));



	printf("문자열의 배열의 주소 : %x\n", msg); //&msg[0]
	printf("문자열의 포인터의 값 : %x\n", p);


	//주소를 이용한 문자열 출력
	printf("%s\n", p);
	printf("%s\n", p + 1);




	// 문자 하나만 출력하는 방법
	for (int i = 0; i < 10; i++)
	{
		printf("%c", *(p + i));


	}

	int size = sizeof(msg) / sizeof(msg[0]);
	printf("\n\n\n%d\n\n\n", size);

	for (int i = 0; i < size; i++)
	{
		printf("%c", *(p + i));


	}
	return 0;
}