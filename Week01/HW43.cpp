#include <stdio.h>

int main() {

	// 2중 포문 구구단 출력
	for (int i = 1; i <= 9; i++) { 
		for (int j = 2; j <= 5; j++) {
			printf("%d * %d = %2d  ", j, i, (j * i));
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 6; j <= 9; j++) {
			printf("%d * %d = %2d  ", j, i, (j * i));
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");

	// 3중 포문 구구단 출력

	for (int i = 0; i < 2; i++)	{
		for (int y = 1; y <= 9; y++) {
			for (int k = 2 + 4 * i; k <= 5 + 4 * i; k++) {
				printf("%d * %d = %2d  ", k, y, k * y);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}