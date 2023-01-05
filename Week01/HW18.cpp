#include <stdio.h>
#pragma warning(disable:4996)
int printAge();
int inputCount();
int output(int, int, int);

int main() {
	// 계산
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
	printf("입장객의 나이를 입력하세요 : ");
	scanf("%d", &age);
	return age;
}

int inputCount() {
	int count;
	printf("입장객의 수를 입력하세요 : ");
	scanf("%d", &count);
	return count;
}

int output(int price, int discountPrice, int finalPrice) {
	// 출력
	printf("입장료 => %d원\n", price);
	printf("할인금액 => %d원\n", discountPrice);
	printf("결제금액 => %d원\n", finalPrice);
	return 1;
}