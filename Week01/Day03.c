#include <stdio.h>
#pragma warning (disable:4996)
int main(void) {
	int num = 1, sum = 0;

	while (num != 0) {
		printf("���� �Է�(���� 0) > ");
		scanf("%d", &num);
		printf("# ���ݱ����� �հ� : %d\n", sum += num);
	}
	return 0;
}
