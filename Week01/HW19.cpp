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
	printf("년도를 입력하세요 : ");
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
		printf("%d년은 윤년(Leap year)입니다.", year);
	}
	else if (yearCheck == 0){
		printf("%d년은 평년(Common year입니다.", year);
	}
}