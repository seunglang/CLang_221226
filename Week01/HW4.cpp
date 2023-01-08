#include <stdio.h>

int main() {
	double year = 365.2422;
	double cloneYear = 365.2422;
	int Y365 = (int)cloneYear;
	cloneYear -= Y365; // 2422일 구하기 - 계산 시작

	int hours = cloneYear * 24;
	cloneYear = (cloneYear * 24) - hours;
	int minutes = cloneYear * 60;
	cloneYear = (cloneYear * 60) - minutes;
	double seconds = cloneYear * 60;


	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초 입니다.", year, Y365, hours, minutes, seconds);
	return 0;
}