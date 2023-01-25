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
		printf("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
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
				printf("* 잘못된 입력입니다.\n\n");
				continue;
			}
		}
		printf("* 잘못된 입력입니다.\n\n");
		checkNeed();
	}
}

unsigned char openFan(unsigned char data) {

	int num = 0;
	unsigned char count = 1;
	printf("--------------------\n\t\tFan 열기 작업 실행 화면\n------------------\n");
	while (1) {
		printf("* OPEN할 FAN 를 입력하시오(1-8) : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num >= 1 && num <= 8) {
				count = count << unsigned char(num - 1);
				return (data | count);
			}
			else {
				printf("* 잘못된 입력입니다.\n\n");
				continue;
			}
		}
		printf("* 잘못된 입력입니다.\n\n");
		checkNeed();
	}
}

unsigned char offFan(unsigned char data) {
	int num;
	unsigned char count = 1;
	printf("-----------------------\n\t\tFan 닫기 작업 실행 화면\n--------------------------\n");
	while (1) {
		printf("* CLOSE할 FAN 를 입력하시오(1-8) : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num >= 1 && num <= 8) {
				count = count << unsigned char(num - 1);
				return data ^ count;
			}
			else {
				printf("* 잘못된 입력입니다.\n\n");
				continue;
			}
		}
		printf("* 잘못된 입력입니다.\n\n");
		checkNeed();
	}
}

unsigned char reverseFan(unsigned char data) {
	printf("----------------------\n\t\tFan 전체 전환 작업 실행 화면\n---------------------------\n");
	printf("전체 FAN의 상태가 전환되었습니다. (ON, OFF 상태 뒤바뀜)\n");
	return ~data;
}

void displayFan(unsigned char data) {

	unsigned char count = 0x80;

	printf("----------------------------------------\n");
	for (int i = 8; i >= 1; i--) {
		printf("%d번FAN\t", i);
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