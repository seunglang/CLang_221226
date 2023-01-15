#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // rand(), srand() 함수 사용을 위한 include
#include <time.h> // time()함수를 사용하기 위한 include

int input();
int output(int, int);
int random();
int count = 0;
int n0 = 0;
int n100 = 100;

int main() {

	srand((unsigned int)time(NULL)); // 필수 호출

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
	printf("우와~~ 맞았당~~~ 추카추카~~ %d 번째 만에 맞추셨습니다.", count);

	return 0;
}

int input() {
	int num;
	while (true) {

	printf("# 숫자를 입력하시오 : ");
	scanf("%d", &num);
		if (num > 100 || num <= 0) {
			printf("1~100의 숫자를 입력해주세요\n");
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
		printf("%d보다는 크고 %d보다는 작습니다.\n", num, n100);
		n0 = num;
	}
	else if (num > res) {
		printf("%d보다는 크고 %d보다는 작습니다.\n",n0, num);
		n100 = num;
	}
	count++;
	return count;
}

int random() { // 난수 발생 함수
	int res;
	res = rand() % 100 + 1;
	return res;
}