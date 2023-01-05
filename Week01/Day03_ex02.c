#include <stdio.h>
#pragma warning (disable:4996)
int main(void) {
	int num = 1, sum = 0;

	printf("정수 입력(문자열 입력시 종료됩니다.)\n");
	while (scanf("%d", &num) == 1) {
		
		
		printf("# 지금까지의 합계 : %d\n", sum += num);
	}
	return 0;
}
