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
	printf("�Ÿ��� �Է��ϼ���(km)���� : ");
	scanf("%lf", &distance);
	return distance;
}

double inputSpeed() {
	double speed;
	printf("�ü��� �Է��ϼ���(km/h) ���� : ");
	scanf("%lf", &speed);
	return speed;
}

void output(double distance, int hours, int minutes, double seconds) {
	printf("%.2lf km = > %d�ð� %d�� %.3lf �� �ҿ��", distance, hours, minutes, seconds);
}