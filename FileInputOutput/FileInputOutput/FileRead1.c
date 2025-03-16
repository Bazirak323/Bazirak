#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_read1() 
{	//파일 포인터 변수 생성
	FILE* fp;
	int ch;
	fp = fopen("out.txt", "r");
	if (fp == NULL)
	{
		printf("열기 실패");
		return -1;

	}



	//파일 읽기
	//한 글자 버-죤
	ch = fgetc(fp); //fgetc가 int로 반환을 하기 때문에 
	printf("%c", ch);


	//모든 글자 버--죤
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF) {
			break;

		}

		printf("%c", ch);

	}






	fclose(fp);

	return 0;
}