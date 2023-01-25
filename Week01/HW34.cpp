#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
int count = 0;
int input();
double calc(int, int);
void output(int, int, double);

int main() {
	int userCode = input();
	int usedTon = input();
	double res = calc(userCode, usedTon);
	output(userCode, usedTon, res);
	return 0;
}

int input() {
	int num;
	if (count == 0) {
		count++;
		printf("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
		scanf("%d", &num);
	}
	else if (count > 0) {
		printf("* 사용량을 입력하시오(ton단위) : ");
		scanf("%d", &num);
	}
		return num;
}

double calc(int num1, int num2) {
	double res;
	switch (num1) {
	case 1: return 50 * num2 * 1.05;
	case 2: return 45 * num2 * 1.05;
	case 3: return 30 * num2 * 1.05;
	}
}

void output(int userCode, int usedTon, double calc) {
	char msg[10];
	switch (userCode) {
	case 1: {strcpy(msg, "(가정용)"); break; }
	case 2: {strcpy(msg, "(상업용)"); break; }
	case 3: {strcpy(msg, "(공업용)"); break; }
	}
	printf("\n# 사용자코드 : %d%s\n# 사용량 : %d ton\n# 총수도요금 : %.0lf원\n", userCode, msg, usedTon, calc);
	return;
}