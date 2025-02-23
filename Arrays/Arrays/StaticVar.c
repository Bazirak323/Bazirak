#include <Stdio.h>
void call();
int main_statcu() 
{
	
	call();
	call();
	call();
	call();








	return 0;
}

//void - 반환 자료형이 없음(리턴 안 해도 됨!)
void call()
{
	static int x = 0; //static 정적 변수 선언된 함수가 종료되어도 값이 계속 유지되며 프로그램이 종료되어야 소멸함
	x += 1; // x = x + 1


	printf("현재 호출은 %d번째입니다.\n", x);


}