#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int money;
	printf("환산할 용돈 값을 입력하세요 : ");
	scanf("%d", &money);
	int m50000 = 50000;
	int m10000 = 10000;
	int m5000 = 5000;
	int m1000 = 1000;
	int m500 = 500;
	int m100 = 100;
	int m50 = 50;
	int m10 = 10;

	printf("%d원권 => %d\n",m50000, money / m50000);
	money = money % m50000;
	printf("%d원권 => %d\n",m10000,money / m10000);
	money = money % m10000;
	printf("%d원권 => %d\n",m5000, money / m5000);
	money = money % m5000;
	printf("%d원권 => %d\n",m1000, money / m1000);
	money = money % m1000;
	printf("%d원권 => %d\n",m500, money / m500);
	money = money % m500;
	printf("%d원권 => %d\n",m100, money / m100);
	money = money % m100;
	printf("%d원권 => %d\n",m50, money / m50);
	money = money % m50;
	printf("%d원권 => %d\n",m10, money / m10);
	money = money % m10;
}