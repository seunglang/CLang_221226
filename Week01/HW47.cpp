#pragma warning (disable : 4996)
#include <stdio.h>

void input(double*, int);
double uMax(double*, int);
double uMin(double*, int);
void output(double, double);
void myflush();

int main() {

	double num[5];
	double max;
	double min;

	int count = sizeof(num) / sizeof(num[0]);

	input(num, count);
	max = uMax(num, count);
	min = uMin(num, count);
	output(max, min);
	return 0;
}

void input(double* num, int count) {
	double num1;
	for (int i = 0; i < count; i++) {
		while (true) {
			printf("%d번 방 값 : ", i);
			scanf("%lf", &num1);
			if (getchar() == '\n') {
				num[i] = num1;
				break;
			}
			myflush();
		}
	}
}

double uMax(double* num, int count) {
	double max = num[0];
	for (int i = 0; i < count; i++) {
		if (max <= num[i]) max = num[i];
		else;
	}
	return max;
}

double uMin(double* num, int count) {
	double min = num[0];
	for (int i = 0; i < count; i++) {
		if (min >= num[i]) min = num[i];
		else;
	}
	return min;
}

void output(double max, double min) {
	printf("\n가장 큰 값 : %.2lf\n가장 작은 값 : %.2lf", max, min);
	return;
}

void myflush() {
	while (getchar() != '\n');
	return;
}