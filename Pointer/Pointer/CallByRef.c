#include <stdio.h>
void CallByValue(int); //����ο��������
void CallByReference(int*);

int main_yesterday(){

	int num = 10;

	CallByValue(num);
	//1�� ���ϴ� �Լ�
	printf("\n��������111 %d\n", num);


	printf("\n\n======================================\n\n");

	CallByReference(&num);
	printf("\n��������222 %d\n", num);

	printf("\n\n======================================\n\n");

	printf("���θ��� %d\n", num);











	return 0;
}



void CallByValue(int n)
{

	n++;


	printf("��������111 %d\n", n);

	//�׳� �ѱ�� ���� ������⿡ �ּҷ� ���ܾ� �����ִ´�.
}
//����(�޸� ����)�� ���� ȣ��
void CallByReference(int* p)
{
	//*p = *p + 1;
	*p += 1;
	printf("��������222 %d\n", *p);

}