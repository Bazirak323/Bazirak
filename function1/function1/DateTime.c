#define _CRT_SECURE_NO_WARNINGS //��ǻ�Ϳ� �ִ� ���𰡸� ��ĵ�ؾ� �� �� �����
#include <stdio.h>
#include <time.h>


//��¥�� �ð� ���
int main_mon()
{
	//���� �ð��� �˱� ���� time_t

	time_t ct;
	struct tm* now; // tm ����ü�� ��ü(now) ����

	time(&ct);
	now = localtime(&ct); // ��¥ ����
			//��¥�� ���� �ð����� �����(��ǻ�͸� ��ĵ�� �ʿ䰡 ����)


	printf("���� ��¥�� %d�� %d�� %d���Դϴ�.\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);

	printf("���� �ð��� %d�� %d�� %d���Դϴ�.\n", now->tm_hour, now->tm_min, now->tm_sec);




	//���� ���� 0-��. 1-��, 2-ȭ ..... 
	printf("������ ");
	switch (now->tm_wday)
	{
	case 0:
		printf("�Ͽ���");
		break;
	case 1:
		printf("������");
		break;
	case 2:
		printf("ȭ����");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("�����");
		break;
	case 5:
		printf("�ݿ���");
		break;
	case 6:
		printf("�����");
		break;
	}
	printf("�Դϴ�.");

	return 0;
}