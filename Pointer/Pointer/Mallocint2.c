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
			printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
			exit(1);

		}
		
		ptr2[0] = 11;//���� �Ҵ��� �Ѱ����� �Ѱ��� �迭�� ���� ������ ���� ��					
		ptr2[1] = 1000;


	printf("%d %x\n", *ptr1, ptr1);
	printf("%d %x\n", *(ptr2 + 0), (ptr2 + 0));
	printf("%d %x\n", *(ptr2 + 1), (ptr2 + 1));

	free(ptr2);



















	return 0;
}