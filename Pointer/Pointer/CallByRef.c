#include <stdio.h>
void CallByValue(int);
int main(){

	int num = 10;

	CallByValue(num);
	//1�� ���ϴ� �Լ�

	printf("���θ��� %d\n", num);











	return 0;
}



void CallByValue(int n)
{

	n++;


	printf("�������� %d\n", n);

	//�׳� �ѱ�� ���� ��������� �ּҷ� �ѱ�� �����ְ� �ȴ�.
}