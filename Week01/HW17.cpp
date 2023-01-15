#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main() {

	char name[15];
	double height = 0;
	char gender = 0;

	printf("# 성명 입력 : ");

	fgets(name, 30, stdin);
	name[strlen(name) - 1] = '\0';
	printf("# 키 입력(cm단위) : ");
	scanf("%lf", &height);

	printf("# 성별입력(M/F) : ");
	scanf(" %c", &gender);

	if (gender == 'M') {
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.", name, height);
	}
	else if (gender == 'F') {
		printf("%s씨의 키는 %.2lfcm이고 여성입니다.", name, height);
	}
	return 0;

}