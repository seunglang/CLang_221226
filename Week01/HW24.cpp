#pragma warning(disable:4996)
#include <stdio.h>

int input();
int calc(int);
void output(int, int);
int main() {
	int length = input();
	calc(length);
	int i = calc(length);
	output(length, i);
}

int input() {
	int length;
	printf("우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &length);
	return length;
}
int calc(int length) {
	int afternoon = 0;
	int day = 24;
	int time;
	int i = 0;
	// i가 (1)일 역할 수행
	while (true) {
		length = length - 50;
		if (afternoon % day == 0 || length <= 0) {
			i++;
			day += 24;
		}
		afternoon = afternoon + 12;
		if (length <= 0) {
			break;
		}
		length = length + 30;
		afternoon = afternoon + 12;
	}
	return i;
}
void output(int length, int i) {
	printf("우물높이 %dcm : %d", length, i);
}