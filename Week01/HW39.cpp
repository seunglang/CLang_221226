#pragma warning (disable : 4996)
#include <stdio.h>

int main() {

	int money;

	printf("현재 당신의 소유 금액 입력 : ");
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
							printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", i, j, k);
						}
					}
				}
			}
			printf("어떻게 구입하시겠습니까?");
		}
	return 0;
}