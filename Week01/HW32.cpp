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
		printf("%d�� %d���� %d�Դϴ�.\n\n", inum, N, res);


		double fnum = inputDouble();
		int M = inputUInt();
		double res2 = fpow(fnum, M);
		printf("%.2lf�� %d���� %.3lf�Դϴ�.", fnum, M, res2);

	return 0;
}

int inputUInt() {
	int num;
	int count = 0;
	if (count == 0) {
		count++;
		printf("* ���� ���� ���� �Է� �Ͻÿ� : ");
		scanf("%d", &num);
	}
	else if (count > 0) {
		printf("* ���� �Ǽ� ���� �Է� �Ͻÿ� : ");
		scanf("%d", &num);
	}
	return num;
}

double inputDouble() {
	double num;
	int count = 0;
	if (count == 0) {
		count++;
		printf("* ���� ���� �Է� �Ͻÿ� : ");
		scanf("%lf", &num);
	}
	else if (count > 0) {
		printf("* ���� ���� �Է� �Ͻÿ� : ");
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