#include <stdio.h>
int rounnd()
{

	int year = 2025;
	char place = 'b';
	char name[] = "jerry"; //여러개를 닮는 문자열(배열)\
	// J e r r y '\0'<<< null 문자(공백문자) => jerry의 용량은 6이다

	printf("%d년 입니다. \n", year);
	printf("%c강의장입니다.\n", place);
	printf("제 이름은 %s입니다.\n", name);
	printf("함수를 학습합니다.\n");
	//sizeof() = 글자의 크기(개수)
	printf("배열의 크기 : %d\n", sizeof(name));

		return 0;



}
