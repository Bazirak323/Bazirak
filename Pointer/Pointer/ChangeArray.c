#include <stdio.h>
//함수의 매개변수로 포인터 사용
//int *a = arr

void ChangeArray(int *a)
{

	a[1] = 50;




}



int main_cha()
{
	int arr[] = { 10, 20, 30 };

	ChangeArray(arr); //함수 호출


	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);




	}









	return 0;
}