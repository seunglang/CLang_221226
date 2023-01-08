#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	
	double height, average = 0, sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("1 번 학생의 키는 ? ");
		scanf("%lf", &height);
		sum += height;
	}
	average = sum / 5.0;
	printf("다섯 명의 평균 키는 %.1lf cm 입니다.", average);

	return 0;
}