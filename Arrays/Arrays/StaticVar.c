#include <Stdio.h>
void call();
int main_statcu() 
{
	
	call();
	call();
	call();
	call();








	return 0;
}

//void - ��ȯ �ڷ����� ����(���� �� �ص� ��!)
void call()
{
	static int x = 0; //static ���� ���� ����� �Լ��� ����Ǿ ���� ��� �����Ǹ� ���α׷��� ����Ǿ�� �Ҹ���
	x += 1; // x = x + 1


	printf("���� ȣ���� %d��°�Դϴ�.\n", x);


}