#include <stdio.h>
int rounnd()
{

	int year = 2025;
	char place = 'b';
	char name[] = "jerry"; //�������� ��� ���ڿ�(�迭)\
	// J e r r y '\0'<<< null ����(���鹮��) => jerry�� �뷮�� 6�̴�

	printf("%d�� �Դϴ�. \n", year);
	printf("%c�������Դϴ�.\n", place);
	printf("�� �̸��� %s�Դϴ�.\n", name);
	printf("�Լ��� �н��մϴ�.\n");
	//sizeof() = ������ ũ��(����)
	printf("�迭�� ũ�� : %d\n", sizeof(name));

		return 0;



}
