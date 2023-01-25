#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>


int primeNumber(int);
void myflush();

int main() {

	int num;
	int res;

	while (true) {
		int count = 0;
		printf("* 정수값 하나를 입력하시오 : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num > 0) {
				for (int i = 1; i <= num; i++) {
					res = primeNumber(i);
					if (res == 1) {
						printf("%5d", i);
						count++;
						if ((count % 5) == 0) {
							printf("\n");
						}
					}
				}
				if ((count % 5) != 0) printf("\n");
				printf("1~%d까지의 총 소수는 %d개 입니다.\n\n", num, count);
				continue;
			}
		}
		printf("* 잘못된 입력입니다.\n\n");
		myflush();
	}
	return 0;
}

int primeNumber(int number) {

	int num = int(sqrt(number));

	if (number != 1) {
		for (int i = 2; i <= num; i++) {
			if (number % i == 0) {
				return 0;
			}
		}
		return 1;
	}
	else return 0;
}

void myflush() {
	while (getchar() != '\n');
	return;
}