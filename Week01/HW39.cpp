#pragma warning (disable : 4996)
#include <stdio.h>

int main() {

	int money;

	printf("���� ����� ���� �ݾ� �Է� : ");
	scanf("%d", &money);
		if (money != '$') {
			for (int i = 1; (i * 500) <= money; i++) {
				int num1 = money;
				num1 -= (i * 500);
				for (int j = 1; (j * 700) <= money; j++) {
					int num2 = num1;
					num2 -= (j * 700);
					for (int k = 1; (k * 400) <= money; k++) {
						int num3 = num2;
						num3 -= (k * 400);
						if (num3 == 0) {
							printf("ũ����(%d ��), �����(%d ����), �ݶ�(%d ��)\n", i, j, k);
						}
					}
				}
			}
			printf("��� �����Ͻðڽ��ϱ�?");
		}
	return 0;
}