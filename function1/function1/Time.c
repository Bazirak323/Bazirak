#include <stdio.h>
#include <time.h> //
#include <Windows.h> //sleep �Լ�


//�ð� �Լ� - time()
int main_ttttime() {


	time_t now;    //time_t �ڷ���
	now = time(NULL); // �� �κ��� �׳� �ܿ��

	int boon;

	boon = (now / 60);

	int si;

	si = (boon / 60);

	int il;
	il = (si / 24);

	int year;

	year = (il / 365);

	printf("%ld��\n", year);
	//1970�� 1�� 1���� �������� �ð��� ���� �ִ�.
	time_t end, start;
	time(&start);

	for (int i = 1; i <= 100000000; i++) {
		printf("%d\n", (i / 1000));
		Sleep(0.000001);

	}
	time(&end);
	printf("����ð� : %ld\n", (end - start));


	return 0;
}