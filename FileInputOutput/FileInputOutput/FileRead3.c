#include <stdio.h>

int main()
{

	FILE* fp;
	char buffer[256]; // �ܾ� ������ �迭

	fopen_s(&fp, "words.txt", "r"); //crt ��¼�� �� �ᵵ ��
	if (fp == NULL)
	{
		printf("���� ����");
		return -1;

	}

	//fgets ����ϱ�
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		printf("%s", buffer);

	}




































	fclose(fp);
	return 0;
}