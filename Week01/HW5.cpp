#pragma warning(disable:4996)
#include <stdio.h>

int input();
void output(double);

int main() {
	int usedElec = input();
	int basicCharge = 660;
	double kwCharge = 88.5;
	double totalCharge = basicCharge + (usedElec * kwCharge);
	double tax = (totalCharge * 9) / 100;
	totalCharge = totalCharge + tax;
	output(totalCharge);
	return 0;
}

int input() {
	int usedElec;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &usedElec);
	return usedElec;
}

void output(double totalCharge) {
	printf("전기 사용 요금은 %.6lf 원 입니다.", totalCharge);
}