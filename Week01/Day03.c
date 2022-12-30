#include <stdio.h>
#pragma warning (disable:4996)
int main(void) {
	int num = 1, sum = 0;

	while (num != 0) {
		printf("정수 입력(종료 0) > ");
		scanf("%d", &num);
		printf("# 지금까지의 합계 : %d\n", sum += num);
	}
	return 0;
}
