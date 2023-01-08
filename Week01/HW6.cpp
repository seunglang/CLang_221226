#pragma warning(disable:4996)
#include <stdio.h>

int input();
void output(double);

int main() {
	int fahrenheit = input();
	
	double celsius = (double)5 / 9 * (fahrenheit - 32);
	output(celsius);
	return 0;
}

int input() {
	int fahrenheit;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &fahrenheit);
	return fahrenheit;
}

void output(double celsius) {
	printf("섭씨 온도는 %.1lf도 입니다.", celsius);
}