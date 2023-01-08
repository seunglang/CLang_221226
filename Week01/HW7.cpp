#pragma warning(disable:4996)
#include <stdio.h>

double inputDistance();
double inputSpeed();
void output(double, int, int, double);
int main() {
	double distance = inputDistance();
	double speed = inputSpeed();

	double source = distance / speed * 3600;
	int hours = source / 3600;
	source = source - (hours * 3600);
	int minutes = source / 60;
	source = source - (minutes * 60);;
	double seconds = source;
	output(distance, hours, minutes, seconds);
	return 0;
}

double inputDistance() {
	double distance;
	printf("거리를 입력하세요(km)단위 : ");
	scanf("%lf", &distance);
	return distance;
}

double inputSpeed() {
	double speed;
	printf("시속을 입력하세요(km/h) 단위 : ");
	scanf("%lf", &speed);
	return speed;
}

void output(double distance, int hours, int minutes, double seconds) {
	printf("%.2lf km = > %d시간 %d분 %.3lf 초 소요됨", distance, hours, minutes, seconds);
}