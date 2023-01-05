#include <stdio.h>
#pragma warning(disable:4996)
int input();
int yearCheck(int);
void output(int, int);

int main() {
	int year = input();
	yearCheck(year);
	int resultYear = yearCheck(year);
	output(year, resultYear);
}

int input() {
	int year;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", &year);
	return year;
}

int yearCheck(int year) {
	int oneOrZero;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		oneOrZero = 1;
	}
	else {
		oneOrZero = 0;
	}
	return oneOrZero;
}

void output(int year, int yearCheck) {
	if (yearCheck == 1) {
		printf("%d���� ����(Leap year)�Դϴ�.", year);
	}
	else if (yearCheck == 0){
		printf("%d���� ���(Common year�Դϴ�.", year);
	}
}