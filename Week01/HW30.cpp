#pragma warning (disable : 4996)
#include <stdio.h>

int main() {

	int num = 0;
	unsigned int n16 = 0x80000000;

	printf("* 10진수 정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("%d(10) = ", num);
	for (int i = 0; i < 32; i++) {
		if ((n16 & num) != 0) {
			printf("1");
		}
		else {
			printf("0");
		}
		n16 = n16 >> 1;
	}
	printf("(2)");

	return 0;
}