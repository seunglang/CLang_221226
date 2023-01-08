#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int num;
	printf("출력 라인수를 입력하시오 : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int j = 0; j < (num * 2) - i * 2; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}