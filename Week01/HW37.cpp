#pragma warning (disable : 4996)
#include <stdio.h>

int input();

int main() {
	int i = 1;
	int	num1 = 1;
	int num2 = 1;
	int countInputNum = input();
	while (i++ <= countInputNum) {
		printf("%d + ", num1);
		int num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	printf("\b\b= %d", num2 - 1);
	return 0;
}

int input() {
	int num;
	printf("�Ǻ���ġ ������ �׼��� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}