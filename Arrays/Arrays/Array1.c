#include <stdio.h>

int main_pyeonggyun()
{
	//
	int kor[4] = { 63, 90, 90, 70 };
	int hakki[] = { 0 };
	int sum = 0;
	int pyeong;
	kor[1] = 40;
	pyeong = (kor[0] + kor[1] + kor[2] + kor[3]) / 4; //���� �� ���� ������ 0���̴�.
	double avg = 0.0;

	for (int i = 0; i < 4; i += 1)
	{
		sum = sum + kor[i];
		printf("%d��° ������ %d���̴�.\n", i + 1, kor[i]);
		

	}
	//����
	avg = (double)sum / 4; // ���� ����ȯ(int�� double�� ������ �ٲ۴�.

	printf("���������� ����� %.2lf���̴�.", avg);    // .2 �Ҽ��� ��°�ڸ����� ������
													// lf �Ǽ�(�Ҽ��� ��)�� ����ϱ�













	return 0;
}