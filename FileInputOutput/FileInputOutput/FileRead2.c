#include <stdio.h>

int main_osdksokdoskdko()
{

	FILE* fp;
	int ch;
	char buffer[256]; // 읽은 데이터를 저장할 배열(fgets랑 짝을 이룸)

	fopen_s(&fp, "ascii.txt", "r"); //crt 어쩌구 안 써도 됨
	if (fp == NULL)
	{
		printf("열기 실패");
		return -1;

	}

	/*

	while (1)
	{

		ch = fgetc(fp);
		if (ch == EOF)
			break;

		printf("%c", ch);

	}

	
	while ((ch = fgetc(fp)) != EOF) //문장의 끝이 아닐 동안 계속
	{
		printf("%c", ch);
	}

	*/

	//fgets() 사용해버리기 ㅋㅋ
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		printf("%s", buffer);

	}









	fclose(fp);

	system("pause");

	return 0;
}
