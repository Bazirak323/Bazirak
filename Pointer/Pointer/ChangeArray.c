#include <stdio.h>
//�Լ��� �Ű������� ������ ���
//int *a = arr

void ChangeArray(int *a)
{

	a[1] = 50;




}



int main_cha()
{
	int arr[] = { 10, 20, 30 };

	ChangeArray(arr); //�Լ� ȣ��


	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);




	}









	return 0;
}