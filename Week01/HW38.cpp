#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int workedDay;
	int i = 1;
	int count = 0;
	int sum = 0;
	printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
	scanf("%d", &workedDay);
	while (true) {
		for (int j = 1; j <= i; j++) {
			sum += i;
			count++;
			if (workedDay == count) {
				break;
			}
		}
		if (workedDay == count) {
			break;
		}
		i++;
	}
	printf("  �ٹ��� : %d�� / �� ��ȭ �� : %d��", workedDay, sum);
	return 0;
}