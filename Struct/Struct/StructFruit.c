#include <stdio.h>

typedef struct
{
	char name[20];
	int quantity;
	char* type;

}fruit;

int main_fruitnnnnnnnnn()
{
	//������ �迭 ����
	char* types[] = { "apple", "banana", "orange" };


	//����ü ���� ����
	fruit f = { "�뱸 ���", 100, types[0] };

	printf("���� �̸� : %s\n", f.name);
	printf("���� ���� : %d\n", f.quantity);
	f.type = "kiwi";
	printf("���� ���� : %s\n", f.type);

	return 0;
}