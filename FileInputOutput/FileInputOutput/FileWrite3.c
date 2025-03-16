#include <stdio.h>
int main_wjeowojeojwoejoje()
{
	
	FILE* fp;


	fopen_s(&fp, "words.txt", "w"); //crt 어쩌구 안 써도 됨
	if (fp == NULL)
	{
		printf("열기 실패");
		return -1;

	}

	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant", "monkey", "lion", "tiger", "snake" };

	for (int i = 0; i < 10; i++)
	{
		fprintf(fp, "%s\n", words[i]);
	}













































	fclose(fp);
	return 0;
}