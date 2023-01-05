#include <stdio.h>
#pragma warning(disable:4996)
// TODO  printAge()함수의 선언부
// TODO  printHeight() 함수의 선언부
void printAge(int);
void printHeight(double);

int main() {
	char name[20] = "강승원";
	int age;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	double height;
	printf("신장을 입력하세요 : ");
	scanf("%lf", &height);

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age) {
	printf("나이 : %d\n", age);
	return;
}

void printHeight(double height) {
	printf("신장 : %.2lf", height);
	return;
}