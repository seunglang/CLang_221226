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
		printf("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");
		scanf("%d", &num);
	}
	else if (count > 0) {
		printf("* ��뷮�� �Է��Ͻÿ�(ton����) : ");
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
	case 1: {strcpy(msg, "(������)"); break; }
	case 2: {strcpy(msg, "(�����)"); break; }
	case 3: {strcpy(msg, "(������)"); break; }
	}
	printf("\n# ������ڵ� : %d%s\n# ��뷮 : %d ton\n# �Ѽ������ : %.0lf��\n", userCode, msg, usedTon, calc);
	return;
}