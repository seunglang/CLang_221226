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
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &num);
	return num;
}