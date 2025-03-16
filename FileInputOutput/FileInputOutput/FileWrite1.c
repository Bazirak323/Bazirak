#define _CRT_SECURE_NO_WARNINGS // fopen() 오류 방지
#include <stdio.h>

int main_write()
{

	//파일 구조체 포인터 생성
	FILE* fp;

			//fopen(파일, 모드) : 쓰기 모드 - w, 읽기 모드 - r(file open)
	fp = fopen("out.txt", "w");
	if (fp == NULL)
	{	//예외(오류) 처리
		printf("파일 열기에 실패함\n");
			return 1; // 0 -- 정상 1 or -1 -- 오류
	}
	//파ㅣ일 쓰기 ( 한 단어는 fputc, 여러 단어(배열)은 fputs)
	fputs("apple\n", fp);
	fputs("사과.\n", fp);
















	fclose(fp); //파일 닫기 (file close) <<문을 열었으면 닫아야 한다.

	return 0;
}