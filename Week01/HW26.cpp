#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // rand(), srand() 함수 사용을 위한 include
#include <time.h> // time()함수를 사용하기 위한 include

int input();
int output(int, int);
int random();
int win = 0;
int draw = 0;

int main() {

	int num = 0;
	srand((unsigned int)time(NULL)); // 필수 호출
	while (true) {
		int res = random();

		num = input();
		// 가위1 바위2 보3
		if ((num == 1 && res == 3) || (num == 2 && res == 1) || (num == 3 && res == 2)) {
			printf("당신이 졌습니다.");
			break;
		}

		output(num, res);
	}
	
	printf("게임 결과 : %d 승 %d 무", win, draw);
	return 0;
}

int input() {
	int num = 0;

	while (true) {
	printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
	scanf("%d", &num);
		if (num > 3 || num < 1) {
			printf("1~3사이의 숫자만 선택하세요 ! ");
			continue;
		}
		else {
			return num;
		}
	}
}

int output(int num, int res) {
	// 가위1 바위2 보3
	if ((num == 1 && res == 2) || (num == 2 && res == 3) || (num == 3 && res == 1)) {
		printf("이겼습니다.");
		win++;
	}
	else if ((num == 1 && res == 1) || (num == 2 && res == 2) || (num == 3 && res ==3)) {
		printf("비겼습니다.");
		draw++;
	}


	return win, draw;
}

int random() { // 난수 발생 함수
	int res;
	res = rand() % 3 + 1;
	return res;
}