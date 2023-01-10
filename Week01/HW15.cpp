#pragma warning(disable:4996)
#include <stdio.h>

int inputWeight();
double inputHeight();
double bmi(int, double);
void output(double);
int main() {
	int weight = inputWeight();
	double height = inputHeight();
	bmi(weight, height);

	double resultOfBmi = bmi(weight, height);
	output(resultOfBmi);

	return 0;
}

int inputWeight() {
	int weight;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &weight);
	return weight;
}

double inputHeight() {
	double height;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &height);
	return height;
}

double bmi(int weight, double height) {
	double BMI = weight / (height * height);
	return BMI;
}

void output(double bmi) {
	if (bmi >= 40) {
		printf("����� BMI�� %.1lf���� �����Դϴ�. ", bmi);
	}
	else if (bmi >= 30) {
		printf("����� BMI�� %.1lf���� ���Դϴ�. ", bmi);
	}
	else if (bmi >= 25) {
		printf("����� BMI�� %.1lf���� �������Դϴ�. ", bmi);
	}
	else if (bmi >= 18.5) {
		printf("����� BMI�� %.1lf���� ����ü���Դϴ�. ", bmi);
	}
	else {
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�. ", bmi);
	}
}