#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int seconds;
	printf("ȯ���� �ʸ� �Է��ϼ��� : ");
	scanf("%d", &seconds);
	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	int second = (seconds % 3600) % 60;

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", seconds, hours, minutes, second);
}