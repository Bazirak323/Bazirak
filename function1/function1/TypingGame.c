#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	char* words[] = { "monkey", "ship", "cow", "pig", "army", "reserve", "captain", "fox", "bullet", "gas"};


	char* question; // ����
	char answer[20]; // ����� �Է�
	int n = 1; //���� ��ȣ

	clock_t start, end; //���۽ð�, ����ð�

	double elapsed; //�ҿ�ð�
	int size, Idx; //�迭�� ũ��

	size = sizeof(words) - sizeof(words[1]);



	//���� seed ����

	srand(time(NULL));


	printf("���� Ÿ�� ����, �غ�Ǹ� ����");

	getchar();

	start = clock();


	


	while (n <= 10)
	{
		printf("\n���� %d == ", n);
		size = sizeof(words) / sizeof(words[1]);
		Idx = rand() % size;
		question = words[Idx];


		printf("%s\n", question);
		scanf_s("%s", answer, sizeof(answer));

		if (strcmp(question, answer) == 0)
		{
			printf("\n���\n");
			n++;


		}
		else
		{
			printf("��Ÿ!, �ٽ� ����!\n");


		}

	}
	end = clock();

	printf("\n\n=================================���� ����===========================\n\n");
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð� - %.1lf��\n", elapsed);















































































































































































	return 0;
}