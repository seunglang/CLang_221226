#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	
	int num, sum = 0, count = 1, limit5 = 0;
	while (true) {
		printf("0 ���� ū���� �Է��Ͻÿ�(%d ��°)", count);
		scanf("%d", &num);

		if (num > 0) {
			sum += num;
			count++;
		}

		if (count > 5) {
			printf("�Էµ� ���� �� �� : %d", sum);
			break;
		}
	}

	return 0;
}