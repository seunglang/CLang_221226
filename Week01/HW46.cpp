#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int yearCheck(int);
void inputDay(int*);
int errorCheck(int*);
int dayCalc(int*);
void output(int*, int);
void myflush();

int main() {

	int res;

	while (true) {
		int num[3] = { 0, };
		inputDay(num);
		if (num[0] == 0 || num[1] == 0 || num[2] == 0) break;
		else {
			res = dayCalc(num);
			output(num, res);
		}
	}
	return 0;
}

void inputDay(int* num) {

	int res;

	while (true) {
		printf("* 년 월 일을 입력하시오 : ");
		scanf("%d %d %d", num, num + 1, num + 2);
		if (getchar() == '\n') {
			res = errorCheck(num);
			if (res == 1) break;
			continue;
		}
		else {
			num[0] = 0;
			break;
		}
		myflush();
	}
	return;
}

int errorCheck(int* num) {

	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (num[1] >= 1 && num[1] <= 12) {
		if (yearCheck(num[0]) == 1) {
			if (num[1] == 2) {
				if (num[2] >= 1 && num[2] <= 29) return 1;
			}
			else {
				if (num[2] >= 1 && num[2] <= month[num[1] - 1]) return 1;
			}
		}
		else {
			if (num[2] >= 1 && num[2] <= month[num[1] - 1]) return 1;
		}
	}
	return 0;
}

int dayCalc(int* num) {

	int sum = 0;

	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 1900; i < num[0]; i++) {
		if (yearCheck(i) == 1) {
			sum += 366;
		}
		else {
			sum += 365;
		}
	}
	if (yearCheck(num[0]) == 1) {
		if (num[1] <= 2) {
			for (int i = 0; i < (num[1] - 1); i++) {
				sum += month[i];
			}
			sum += num[2];
		}
		else {
			for (int i = 0; i < (num[1] - 1); i++) {
				sum += month[i];
			}
			sum += num[2] + 1;
		}
	}
	else {
		for (int i = 0; i < (num[1] - 1); i++) {
			sum += month[i];
		}
		sum += num[2];
	}
	return sum;
}

void output(int* num, int res) {
	char day[10];
	switch (res % 7) {
		case 0: strcpy(day, "일요일"); break;
		case 1: strcpy(day, "월요일"); break;
		case 2: strcpy(day, "화요일"); break;
		case 3: strcpy(day, "수요일"); break;
		case 4: strcpy(day, "목요일"); break;
		case 5: strcpy(day, "금요일"); break;
		case 6: strcpy(day, "토요일"); break;
	}
	printf("  %d년 %d월 %d일은 %s입니다.\n\n", num[0], num[1], num[2], day);
	return;
}

int yearCheck(int num) {
	if (num % 4 != 0) {
		return 0;
	}
	else {
		if (num % 100 != 0) {
			return 1;
		}
		else {
			if (num % 400 == 0) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
}

void myflush() {
	while (getchar() != '\n');
	return;
}