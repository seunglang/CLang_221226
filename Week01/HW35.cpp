#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	
	int num, sum = 0, count = 1, limit5 = 0;
	while (true) {
		printf("0 보다 큰수를 입력하시오(%d 번째)", count);
		scanf("%d", &num);

		if (num > 0) {
			sum += num;
			count++;
		}

		if (count > 5) {
			printf("입력된 값의 총 합 : %d", sum);
			break;
		}
	}

	return 0;
}