#include <stdio.h>

int main()
{
	char word[] = "apple"; //1차원 배열(문자열)
	char wordd[3][100] = { "apple", "banana", "mango"}; // 2차원 배열(10개가 3개씩 있다.->[단어의 갯수][철자의 최대개수]
			//앞에 있는 건 빼도 된다

	int size;




	size = sizeof(wordd) / sizeof(wordd[0]);


	for (int i = 0; i < size; i++)
	{
		printf("%s\n", wordd[i]);



	}

	printf("\n\n=====================================================================================\n\n");

	char* fruit[] = { "apple", "banana", "mango" };
				//문자열 포인터 배열은 2차원 배열이 없어도 여러 문자를 넣을 수 있다.

	for (int i = 0; i < size; i++)
	{
		printf("%s\n", fruit[i]);



	}





	return 0;
}