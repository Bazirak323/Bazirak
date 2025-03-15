#include <stdio.h>
#include <stdlib.h>

int main_mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm()
{
	int num = 10;

	int* ptr1;
	int* ptr2;


		ptr1 = &num;	
		ptr2 = (int*)malloc(sizeof(int) * 2);

		if (ptr2 == NULL)
		{
			printf("동적 메모리 할당에 실패했습니다.\n");
			exit(1);

		}
		
		ptr2[0] = 11;//동적 할당은 한개더라도 한개의 배열이 생긴 것으로 봐야 함					
		ptr2[1] = 1000;


	printf("%d %x\n", *ptr1, ptr1);
	printf("%d %x\n", *(ptr2 + 0), (ptr2 + 0));
	printf("%d %x\n", *(ptr2 + 1), (ptr2 + 1));

	free(ptr2);



















	return 0;
}