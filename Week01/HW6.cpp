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
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &fahrenheit);
	return fahrenheit;
}

void output(double celsius) {
	printf("���� �µ��� %.1lf�� �Դϴ�.", celsius);
}