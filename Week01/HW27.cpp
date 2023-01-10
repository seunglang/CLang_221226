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
	printf("계란의 무게를 입력하세요(단위 : g) : ");
	scanf("%d", &eggWeight);
	if (eggWeight < 150) {
		printf("메추리알 가지고 장난하지 마시오 ~ ^^\n");
	}
	else if (eggWeight >=150 && eggWeight <= 500) {
		count++;
		printf("현재 달걀의 수 : %d\n", count);
		if (count >= 10) {
			break;
		}
	}
	else if (eggWeight > 500) {
		printf("타조알 가지고 장난하지 마시오 ~ ^^\n");
	}
	}
}