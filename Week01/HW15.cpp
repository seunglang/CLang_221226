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
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &weight);
	return weight;
}

double inputHeight() {
	double height;
	printf("키를 입력하세요(m) : ");
	scanf("%lf", &height);
	return height;
}

double bmi(int weight, double height) {
	double BMI = weight / (height * height);
	return BMI;
}

void output(double bmi) {
	if (bmi >= 40) {
		printf("당신의 BMI는 %.1lf으로 고도비만입니다. ", bmi);
	}
	else if (bmi >= 30) {
		printf("당신의 BMI는 %.1lf으로 비만입니다. ", bmi);
	}
	else if (bmi >= 25) {
		printf("당신의 BMI는 %.1lf으로 과제출입니다. ", bmi);
	}
	else if (bmi >= 18.5) {
		printf("당신의 BMI는 %.1lf으로 정상체중입니다. ", bmi);
	}
	else {
		printf("당신의 BMI는 %.1lf으로 저체중입니다. ", bmi);
	}
}