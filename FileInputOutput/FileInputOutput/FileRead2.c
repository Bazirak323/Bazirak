#include <stdio.h>

int main_osdksokdoskdko()
{

	FILE* fp;
	int ch;
	char buffer[256]; // ���� �����͸� ������ �迭(fgets�� ¦�� �̷�)

	fopen_s(&fp, "ascii.txt", "r"); //crt ��¼�� �� �ᵵ ��
	if (fp == NULL)
	{
		printf("���� ����");
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

	
	while ((ch = fgetc(fp)) != EOF) //������ ���� �ƴ� ���� ���
	{
		printf("%c", ch);
	}

	*/

	//fgets() ����ع����� ����
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		printf("%s", buffer);

	}









	fclose(fp);

	system("pause");

	return 0;
}
