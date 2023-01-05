#pragma warning(disable:4996)
#include <stdio.h>

int input();
int calc(int);
void output(int, int);
int main() {
	int depth = input();
	calc(depth);
	int i = calc(depth);
	output(depth, i);
}

int input() {
	int depth;
	printf("우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &depth);
	return depth;
}
int calc(int depth) {
	int height = 0;
	int i = 1;
	// i가 (1)일 역할 수행
	while (true) {
		height += 50;
		if (height >= depth) {
			break;
		}
		else {
			height -= 20;
			i++;
		}
	}
	return i;
}
void output(int depth, int i) {
	printf("우물높이 %dcm : %d", depth, i);
}