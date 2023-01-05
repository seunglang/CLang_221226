#pragma warning(disable:4996)
#include <stdio.h>

int getNum();
int main() {
	int num = getNum();
	
	for (int i = 1; i <= num; i++) {
		printf("*");
		if (i % 5 == 0) {
			printf("\n");
		}
	}
}

int getNum() {
	int num;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &num);
	return num;
}