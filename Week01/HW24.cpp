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
	printf("�칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
	scanf("%d", &depth);
	return depth;
}
int calc(int depth) {
	int height = 0;
	int i = 1;
	// i�� (1)�� ���� ����
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
	printf("�칰���� %dcm : %d", depth, i);
}