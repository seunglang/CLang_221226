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
		printf("# ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num >= 0) *start = num;
			break;
		}
		else myflush();
	}
	while (true) {
		printf("# �� ���� �Է��Ͻÿ� : ");
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
		printf("* %d~%d ������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o) : ", start, finish);
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
		printf("  %d~%d ������ ¦��( \b", start, finish);
		for (int i = start; i <= finish; i++) {
			if (i % 2 == 0) {
				printf(" %d", i);
				sum += i;
			}
		}
		printf(")�� ���� %d �Դϴ�.", sum);
	}
	else {
		printf("  %d~%d ������ Ȧ��( \b", start, finish);
		for (int i = start; i <= finish; i++) {
			if (i % 2 == 1) {
				printf(" %d", i);
				sum += i;
			}
		}
		printf(")�� ���� %d �Դϴ�.", sum);
	}
	return;
}

void myflush() {
	while (getchar() != '\n');
	return;
}