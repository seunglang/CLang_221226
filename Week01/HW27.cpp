#pragma warning(disable:4996)
#include <stdio.h>

void input();
int main() {	
	input();
	return 0;
}

void input() {
	int eggWeight = 0;
	int count = 0;
	while (true) {
	printf("����� ���Ը� �Է��ϼ���(���� : g) : ");
	scanf("%d", &eggWeight);
	if (eggWeight < 150) {
		printf("���߸��� ������ �峭���� ���ÿ� ~ ^^\n");
	}
	else if (eggWeight >=150 && eggWeight <= 500) {
		count++;
		printf("���� �ް��� �� : %d\n", count);
		if (count >= 10) {
			break;
		}
	}
	else if (eggWeight > 500) {
		printf("Ÿ���� ������ �峭���� ���ÿ� ~ ^^\n");
	}
	}
}