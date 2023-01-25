#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int workedDay;
	int i = 1;
	int count = 0;
	int sum = 0;
	printf("* 기사의 근무일수를 입력하시오 : ");
	scanf("%d", &workedDay);
	while (true) {
		for (int j = 1; j <= i; j++) {
			sum += i;
			count++;
			if (workedDay == count) {
				break;
			}
		}
		if (workedDay == count) {
			break;
		}
		i++;
	}
	printf("  근무일 : %d일 / 총 금화 수 : %d개", workedDay, sum);
	return 0;
}