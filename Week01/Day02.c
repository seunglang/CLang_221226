#include <stdio.h>
#pragma warning(disable:4996)
main() {
	int genderCode;
	char gender;

	printf("����� ���� �ڵ带 �Է��ϼ��� : ");
	scanf("%d", &genderCode);

	switch (genderCode) {
		case 1:
		case 3:
			gender = 'M'; break;
		case 2:
		case 4:
			gender = 'F'; break;
		default:
			gender = 'X'; break;
	}

	printf("����� ������ %c �Դϴ�.", gender);
}