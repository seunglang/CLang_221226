#include <stdio.h>

int main() {
	double year = 365.2422;
	double cloneYear = 365.2422;
	int Y365 = (int)cloneYear;
	cloneYear -= Y365; // 2422�� ���ϱ� - ��� ����

	int hours = cloneYear * 24;
	cloneYear = (cloneYear * 24) - hours;
	int minutes = cloneYear * 60;
	cloneYear = (cloneYear * 60) - minutes;
	double seconds = cloneYear * 60;


	printf("%.4lf���� %d�� %d�ð� %d�� %.2lf�� �Դϴ�.", year, Y365, hours, minutes, seconds);
	return 0;
}