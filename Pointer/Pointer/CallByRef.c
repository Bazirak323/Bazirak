#include <stdio.h>
void CallByValue(int); //선언부우우우우우우우우
void CallByReference(int*);

int main_yesterday(){

	int num = 10;

	CallByValue(num);
	//1을 더하는 함수
	printf("\n지역지역111 %d\n", num);


	printf("\n\n======================================\n\n");

	CallByReference(&num);
	printf("\n지역지역222 %d\n", num);

	printf("\n\n======================================\n\n");

	printf("메인메인 %d\n", num);











	return 0;
}



void CallByValue(int n)
{

	n++;


	printf("지역지역111 %d\n", n);

	//그냥 넘기면 값은 사라지기에 주소로 남겨야 남아있는다.
}
//참조(메모리 번지)에 의한 호출
void CallByReference(int* p)
{
	//*p = *p + 1;
	*p += 1;
	printf("지역지역222 %d\n", *p);

}