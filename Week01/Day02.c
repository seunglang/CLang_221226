#include <stdio.h>
#pragma warning(disable:4996)
main() {
	int genderCode;
	char gender;

	printf("당신의 성별 코드를 입력하세요 : ");
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

	printf("당신의 성별은 %c 입니다.", gender);
}