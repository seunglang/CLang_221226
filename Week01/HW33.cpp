#pragma warning(disable : 4996)
#include <stdio.h>

unsigned char menu(unsigned char);
unsigned char openFan(unsigned char);
unsigned char offFan(unsigned char);
unsigned char reverseFan(unsigned char);
void displayFan(unsigned char);
void checkNeed();

int main() {
	unsigned char data = 0;
	while (true) {
		data = menu(data);
		if (data == 0) break;
		displayFan(data);
	}
	return 0;
}

unsigned char menu(unsigned char data) {

	int num;

	while (true) {
		printf("1. ȯǳ�� ���� / 2. ȯǳ�� �ݱ� / 3. ȯǳ�� ��ü ��ȯ / 4. ���� : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num == 1) {
				data = openFan(data);
				return data;
			}
			else if (num == 2) {
				data = offFan(data);
				return data;
			}
			else if (num == 3) {
				data = reverseFan(data);
				return data;
			}
			else if (num == 4) {
				return 0;
			}
			else {
				printf("* �߸��� �Է��Դϴ�.\n\n");
				continue;
			}
		}
		printf("* �߸��� �Է��Դϴ�.\n\n");
		checkNeed();
	}
}

unsigned char openFan(unsigned char data) {

	int num = 0;
	unsigned char count = 1;
	printf("--------------------\n\t\tFan ���� �۾� ���� ȭ��\n------------------\n");
	while (1) {
		printf("* OPEN�� FAN �� �Է��Ͻÿ�(1-8) : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num >= 1 && num <= 8) {
				count = count << unsigned char(num - 1);
				return (data | count);
			}
			else {
				printf("* �߸��� �Է��Դϴ�.\n\n");
				continue;
			}
		}
		printf("* �߸��� �Է��Դϴ�.\n\n");
		checkNeed();
	}
}

unsigned char offFan(unsigned char data) {
	int num;
	unsigned char count = 1;
	printf("-----------------------\n\t\tFan �ݱ� �۾� ���� ȭ��\n--------------------------\n");
	while (1) {
		printf("* CLOSE�� FAN �� �Է��Ͻÿ�(1-8) : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num >= 1 && num <= 8) {
				count = count << unsigned char(num - 1);
				return data ^ count;
			}
			else {
				printf("* �߸��� �Է��Դϴ�.\n\n");
				continue;
			}
		}
		printf("* �߸��� �Է��Դϴ�.\n\n");
		checkNeed();
	}
}

unsigned char reverseFan(unsigned char data) {
	printf("----------------------\n\t\tFan ��ü ��ȯ �۾� ���� ȭ��\n---------------------------\n");
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�. (ON, OFF ���� �ڹٲ�)\n");
	return ~data;
}

void displayFan(unsigned char data) {

	unsigned char count = 0x80;

	printf("----------------------------------------\n");
	for (int i = 8; i >= 1; i--) {
		printf("%d��FAN\t", i);
	}
	printf("\n");
	for (int i = 1; i <= 8; i++) {
		if ((data & count) >= 1) {
			printf("   ON\t");
		}
		else printf("  OFF\t");
		count = count >> unsigned char(1);
	}
	printf("\n");
	printf("-----------------------------------------\n\n\n");
	return;
}

void checkNeed() {
	while (getchar() != '\n');
	return;
}