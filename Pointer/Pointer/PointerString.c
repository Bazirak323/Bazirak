#include <stdio.h>

int main()
{
	char word[] = "apple"; //1���� �迭(���ڿ�)
	char wordd[3][100] = { "apple", "banana", "mango"}; // 2���� �迭(10���� 3���� �ִ�.->[�ܾ��� ����][ö���� �ִ밳��]
			//�տ� �ִ� �� ���� �ȴ�

	int size;




	size = sizeof(wordd) / sizeof(wordd[0]);


	for (int i = 0; i < size; i++)
	{
		printf("%s\n", wordd[i]);



	}

	printf("\n\n=====================================================================================\n\n");

	char* fruit[] = { "apple", "banana", "mango" };
				//���ڿ� ������ �迭�� 2���� �迭�� ��� ���� ���ڸ� ���� �� �ִ�.

	for (int i = 0; i < size; i++)
	{
		printf("%s\n", fruit[i]);



	}





	return 0;
}