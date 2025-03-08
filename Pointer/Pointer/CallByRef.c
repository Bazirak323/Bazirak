#include <stdio.h>
void CallByValue(int);
int main(){

	int num = 10;

	CallByValue(num);
	//1을 더하는 함수

	printf("메인메인 %d\n", num);











	return 0;
}



void CallByValue(int n)
{

	n++;


	printf("지역지역 %d\n", n);

	//그냥 넘기면 값은 사라지지만 주소로 넘기면 남아있게 된다.
}