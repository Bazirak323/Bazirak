#include <stdio.h>

int main()
{

	FILE* fp;
	char buffer[256]; // 단어 저장할 배열

	fopen_s(&fp, "words.txt", "r"); //crt 어쩌구 안 써도 됨
	if (fp == NULL)
	{
		printf("열기 실패");
		return -1;

	}

	//fgets 사용하기
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		printf("%s", buffer);

	}




































	fclose(fp);
	return 0;
}