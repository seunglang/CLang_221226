#include <stdio.h>
#pragma warning(disable:4996)
int printAge();
int inputCount();
int output(int, int, int);

int main() {
	// ���
	int price;
	int discountPrice = 0;
	int finalPrice;
	int age = printAge();
	int count = inputCount();
	if (age <= 7) {
		price = 500;
		price *= count;
	}
	else if (age <=13) {
		price = 700;
		price *= count;
	}
	else if (age <= 19) {
		price = 1000;
		price *= count;
	}
	else if (age <= 55) {
		price = 1500;
		price *= count;
	}
	else {
		price = 500;
		price *= count;
	}

	if (count >= 5) {
		discountPrice = price * 10 / 100;
		finalPrice = price - discountPrice;
		output(price, discountPrice, finalPrice);
	}
	else {
		finalPrice = price;
		output(price, discountPrice, finalPrice);
	}

	
}

int printAge() {
	int age;
	printf("���尴�� ���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	return age;
}

int inputCount() {
	int count;
	printf("���尴�� ���� �Է��ϼ��� : ");
	scanf("%d", &count);
	return count;
}

int output(int price, int discountPrice, int finalPrice) {
	// ���
	printf("����� => %d��\n", price);
	printf("���αݾ� => %d��\n", discountPrice);
	printf("�����ݾ� => %d��\n", finalPrice);
	return 1;
}