#include <stdio.h>

int mai_pointer2()
{
	int a[4] = { 10, 20, 30, 40 };



	//������ ������ �迭
	int* pa;



	pa = a; // �迭 a�� �ּ� ����

/*	printf("a[0]�� ���� %d\n", a[0]);
	printf("a[0]�� �ּҴ� %x\n", &a[0]);	   //����
	printf("�迭�� �̸� a�� ����  %x\n", a);//�Ȱ���.



	printf("a[1]�� ���� %d\n", a[1]);
	printf("a[1]�� �ּҴ� %x\n", &a[1]);	   //����
	printf("�迭�� �̸� a + 1�� ����  %x\n", a + 1);//�Ȱ���.

	*/

	for (int i = 0; i < 4; i++)
	{
		printf("%d %x %x\n", pa[i], &pa[i], pa + i);		//�迭 �����̳� ���� �ø��� ������ ���� �Ȱ���



	}


	//������ - �����Ͱ� ����Ű�� ��
	printf("������ pa�� ����Ű�� �޸𸮰� : %d\n", *pa);
	printf("������ pa + 1�� ����Ű�� �޸𸮰� : %d\n", *(pa + 1));



	for (int i = 0; i < 4; i++)
	{
		printf("%d %d\n", pa + i, *(pa + i));

	}

	printf("\n\n ======================================================= \n\n");


	//���ڿ��� ������


	char msg[] = "Good Luck";
	char* p = msg; //msg�� �ּҸ� ����

	printf("%s\n", msg);

	printf("���ڿ��� ũ�� : %d\n", sizeof(msg));
	printf("���ڿ��� ũ�� : %d\n", sizeof(p));



	printf("���ڿ��� �迭�� �ּ� : %x\n", msg); //&msg[0]
	printf("���ڿ��� �������� �� : %x\n", p);


	//�ּҸ� �̿��� ���ڿ� ���
	printf("%s\n", p);
	printf("%s\n", p + 1);




	// ���� �ϳ��� ����ϴ� ���
	for (int i = 0; i < 10; i++)
	{
		printf("%c", *(p + i));


	}

	int size = sizeof(msg) / sizeof(msg[0]);
	printf("\n\n\n%d\n\n\n", size);

	for (int i = 0; i < size; i++)
	{
		printf("%c", *(p + i));


	}
	return 0;
}