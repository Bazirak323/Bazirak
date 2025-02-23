#include <stdio.h>

int main_MUNJAYEOL()
{
	char c1, c2, c3;
	c1 = 's'; //한 문자는 홀따옴표
	c2 = c1 + 1;
	c3 = c1 - 1; // c언어에서 한글을 출력하려면 배열을 만들어야 함
	char c4[] = "c언어에서 한글을 출력하려면 배열이 필요함";


	char a[52];
	char A[52];
	printf("A");
	char ch = 'B';
	for (int i = 0; i < 26; i++)
	{
		a[i] = ch;
		ch++;
			printf("%100c", a[i]); // 두 칸 벌리기
	}









	return 0;
}