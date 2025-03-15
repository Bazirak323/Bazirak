#include <stdio.h>

typedef struct
{
	char name[20];
	int quantity;
	char* type;

}fruit;

int main_fruitnnnnnnnnn()
{
	//포인터 배열 생성
	char* types[] = { "apple", "banana", "orange" };


	//구조체 변수 선언
	fruit f = { "대구 사과", 100, types[0] };

	printf("과일 이름 : %s\n", f.name);
	printf("과일 수량 : %d\n", f.quantity);
	f.type = "kiwi";
	printf("과일 종류 : %s\n", f.type);

	return 0;
}