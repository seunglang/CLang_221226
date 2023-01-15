#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // rand(), srand() �Լ� ����� ���� include
#include <time.h> // time()�Լ��� ����ϱ� ���� include

int input();
int output(int, int);
int random();
int win = 0;
int draw = 0;

int main() {

	int num = 0;
	srand((unsigned int)time(NULL)); // �ʼ� ȣ��
	while (true) {
		int res = random();

		num = input();
		// ����1 ����2 ��3
		if ((num == 1 && res == 3) || (num == 2 && res == 1) || (num == 3 && res == 2)) {
			printf("����� �����ϴ�.");
			break;
		}

		output(num, res);
	}
	
	printf("���� ��� : %d �� %d ��", win, draw);
	return 0;
}

int input() {
	int num = 0;

	while (true) {
	printf("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
	scanf("%d", &num);
		if (num > 3 || num < 1) {
			printf("1~3������ ���ڸ� �����ϼ��� ! ");
			continue;
		}
		else {
			return num;
		}
	}
}

int output(int num, int res) {
	// ����1 ����2 ��3
	if ((num == 1 && res == 2) || (num == 2 && res == 3) || (num == 3 && res == 1)) {
		printf("�̰���ϴ�.");
		win++;
	}
	else if ((num == 1 && res == 1) || (num == 2 && res == 2) || (num == 3 && res ==3)) {
		printf("�����ϴ�.");
		draw++;
	}


	return win, draw;
}

int random() { // ���� �߻� �Լ�
	int res;
	res = rand() % 3 + 1;
	return res;
}