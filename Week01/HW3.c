#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int seconds;
	printf("환산할 초를 입력하세요 : ");
	scanf("%d", &seconds);
	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	int second = (seconds % 3600) % 60;

	printf("%d초는 %d시간 %d분 %d초 입니다.", seconds, hours, minutes, second);
}