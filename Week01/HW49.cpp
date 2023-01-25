#pragma warning (disable : 4996)
#include <stdio.h>

void swap(int*, int);

int main() {

	int num[] = { 1,2,3,4,5 };

	int len = sizeof(num) / sizeof(num[0]);

	printf("처음 배열에 저장된 값 :");
	for (int i = 0; i < len; i++) {
		printf("%3d", num[i]);
	}
	printf("\n");
	swap(num, len);
	printf("바뀐 배열에 저장된 값 :");
	for (int i = 0; i < len; i++) {
		printf("%3d", num[i]);
	}
	return 0;
}

void swap(int* num, int len) {
	int temp;
	for (int i = 0; i < len / 2; i++) {
		temp = num[i]; num[i] = num[len - i - 1]; num[len - i - 1] = temp;
	}
}