#pragma warning (disable : 4996)
#include <stdio.h>

void inputInt(int*, int*);
int inputCh(int, int);
void output(int, int, int);
void myflush();

int main() {

	int start;
	int finish;
	int num;

	inputInt(&start, &finish);

	num = inputCh(start, finish);

	output(start, finish, num);

	return 0;
}

void inputInt(int* start, int* finish) {
	int num;
	while (true) {
		printf("# 시작 값을 입력하시오 : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num >= 0) *start = num;
			break;
		}
		else myflush();
	}
	while (true) {
		printf("# 끝 값을 입력하시오 : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num >= 0) {
				if (num > *start) {
					*finish = num;
					break;
				}
			}
		}
		else myflush();
	}
	return;
}

int inputCh(int start, int finish) {
	char ch;
	while (true) {
		printf("* %d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", start, finish);
		scanf("%c", &ch);
		if (getchar() == '\n') {
			if (ch == 'e') return 1;
			else if (ch == 'o') return 0;
		}
		else myflush();
	}
}

void output(int start, int finish, int num) {
	int sum = 0;
	if (num == 1) {
		printf("  %d~%d 까지의 짝수( \b", start, finish);
		for (int i = start; i <= finish; i++) {
			if (i % 2 == 0) {
				printf(" %d", i);
				sum += i;
			}
		}
		printf(")의 합은 %d 입니다.", sum);
	}
	else {
		printf("  %d~%d 까지의 홀수( \b", start, finish);
		for (int i = start; i <= finish; i++) {
			if (i % 2 == 1) {
				printf(" %d", i);
				sum += i;
			}
		}
		printf(")의 합은 %d 입니다.", sum);
	}
	return;
}

void myflush() {
	while (getchar() != '\n');
	return;
}