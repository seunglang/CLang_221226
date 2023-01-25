#pragma warning (disable : 4996)
#include <stdio.h>

int inputUInt();
double inputDouble();
int ipow(int, int);
double fpow(double, int);

int main() {

		int inum = inputUInt();
		int N = inputUInt();
		int res = ipow(inum, N);
		printf("%d의 %d승은 %d입니다.\n\n", inum, N, res);


		double fnum = inputDouble();
		int M = inputUInt();
		double res2 = fpow(fnum, M);
		printf("%.2lf의 %d승은 %.3lf입니다.", fnum, M, res2);

	return 0;
}

int inputUInt() {
	int num;
	int count = 0;
	if (count == 0) {
		count++;
		printf("* 양의 정수 밑을 입력 하시오 : ");
		scanf("%d", &num);
	}
	else if (count > 0) {
		printf("* 양의 실수 밑을 입력 하시오 : ");
		scanf("%d", &num);
	}
	return num;
}

double inputDouble() {
	double num;
	int count = 0;
	if (count == 0) {
		count++;
		printf("* 양의 승을 입력 하시오 : ");
		scanf("%lf", &num);
	}
	else if (count > 0) {
		printf("* 양의 승을 입력 하시오 : ");
		scanf("%lf", &num);
	}
	
	return num;
}

int ipow(int num, int N) {

	int count = 1;
	int sum = 1;
	while (count <= N) {
		sum = sum * num;
		count++;
	}
	return sum;

}

double fpow(double num, int N) {

	int count = 1;
	double sum = 1.0;
	while (count <= N) {
		sum = sum * num;
		count++;
	}
	return sum;

}