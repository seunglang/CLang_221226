#pragma warning(disable:4996)
#include <stdio.h>

int input();
int calc(int);
void output(int);

int main() {

	for (int i = 0; i < 5; i++) {
		int countStations = input();
		calc(countStations);

		int charge = calc(countStations);
		output(charge);
	}
	return 0;
}

int input() {
	int countStations = 0;
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &countStations);
		return countStations;
}
int calc(int countStations) {
	int charge = 0;
	if (countStations >= 1 && countStations <= 5) {
		charge = 600;
	}
	else if (countStations <= 10) {
		charge = 800;
	}
	// �߰� �������� ���
	else if (countStations <= 12) {
		charge = 800;
		charge += 100;
	}
	else if (countStations <= 14) {
		charge = 800;
		charge += 200;
	}
	else if (countStations <= 16) {
		charge = 800;
		charge += 300;
	}
	else if (countStations <= 18) {
		charge = 800;
		charge += 400;
	}
	else if (countStations > 18) {
		charge = 800;
		charge += 500;
	}
	return charge;
}

void output(int charge) {
	printf("��� : %d��\n", charge);
}