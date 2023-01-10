#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int num1, num2;

	for (int i = 0; ; i++) {
		printf("두개의 정수를 입력하세요 : ");
		int res = scanf("%d %d", &num1, &num2);
		if (res != 2) {
			printf("정수만을 입력해주세요.");
			break;
		}

		if (num1 > num2) {
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
		}
		else if (num2 > num1) {
			printf("%d - %d = %d\n", num2, num1, num2 - num1);
		}
	}
	return 0;
}