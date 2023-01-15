#pragma warning(disable:4996)
#include <stdio.h>

int inputUInt(const char*);
int transNumber(int);

int main() {

	int P1 = inputUInt("시작 값(P1) : ");
	int P2 = inputUInt("끝 값(P2) : ");
	int N = inputUInt("고집수(N) : ");
	int count = 0;

	if (100 <= P1 && 10000 >= P2) {
		if (1 <= N && 10 >= N) {

			printf("고집수가 %d인 숫자 출력\n", N);

			for (int i = P1; i <= P2; i++) {
				int j = 0;
				int res = i;
				while (j + 1) {
					if ((res / 10) != 0) {
						res = transNumber(res); 
					}
					else {
						break;
					}
					j++;
				}
				if (j == N) {
					printf("%d\n", i);
					count++;
				}
			}
		}

	}
	printf("총 개수 : %d", count);
	return 0;
}

int inputUInt(const char* questions) {
	// 음수 입력 예외 처리하기
	int num = 0;

	while (true) {

	
	printf("%s", questions);
	scanf("%d", &num);
		if (num < 0) {
			continue;
		}
		else {
			return num;
		}
	}
}

int transNumber(int num) {


	if (num < 100) {
		int num1 = num / 10;
		int num2 = num - (num1 * 10);
		return num1 * num2;
	}
	else if (num < 1000) {
		int num1 = num / 100;
		int num2 = (num - (num1 * 100)) / 10;
		int num3 = (num - (num1 * 100) - (num2 * 10));
		return (num1 * num2 * num3);
	}
	else if (num < 10000) {
		int num1 = num / 1000;
		int num2 = (num - (num1 * 1000)) / 100;
		int num3 = (num - (num1 * 1000) - (num2 * 100)) / 10;
		int num4 = (num - (num1 * 1000) - (num2 * 100) - (num3 * 10));
		return (num1 * num2 * num3 * num4);
	}
	else {
		return 0;
	}
}