#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // rand(), srand() �Լ� ����� ���� include
#include <time.h> // time()�Լ��� ����ϱ� ���� include

int input();
int output(int, int);
int random();
int count = 0;
int n0 = 0;
int n100 = 100;

int main() {

	srand((unsigned int)time(NULL)); // �ʼ� ȣ��

	int res = random();

	printf("res = %d\n",res);
	int num = 0;
	while (true) {
	num = input();

	if (num == res) {
		break;
	}
	output(num, res);
	}
	int count = output(num, res);
	printf("���~~ �¾Ҵ�~~~ ��ī��ī~~ %d ��° ���� ���߼̽��ϴ�.", count);

	return 0;
}

int input() {
	int num;
	while (true) {

	printf("# ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);
		if (num > 100 || num <= 0) {
			printf("1~100�� ���ڸ� �Է����ּ���\n");
			continue;
		}
		else {
			return num;
			break;
		}
	}
}

int output(int num, int res) {

	
	
	if (num < res) {
		printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", num, n100);
		n0 = num;
	}
	else if (num > res) {
		printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n",n0, num);
		n100 = num;
	}
	count++;
	return count;
}

int random() { // ���� �߻� �Լ�
	int res;
	res = rand() % 100 + 1;
	return res;
}