#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	
	double height, average = 0, sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("1 �� �л��� Ű�� ? ");
		scanf("%lf", &height);
		sum += height;
	}
	average = sum / 5.0;
	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.", average);

	return 0;
}