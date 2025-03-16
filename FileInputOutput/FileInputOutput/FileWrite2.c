#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_wr2() 
{

	//아스키(코드값) 파일 쓰기
	FILE* fp;
	fp = fopen("ascii.txt", "w");
	if (fp == NULL)
	{
		printf("열기 실패");
		return -1;

	}

	//파일 쓰기
	for (int i = 32; i < 128; i++)
	{
		if (i % 10 == 0)
		{
			fputc('\n', fp); //문자 10개당 줄바꿈 한 번


		}
		fputc(i, fp); // 한문자 쓰기
		fputc('\t', fp);

	}











	fclose(fp);

	return 0;
}