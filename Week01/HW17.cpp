#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main() {

	char name[15];
	double height = 0;
	char gender = 0;

	printf("# ���� �Է� : ");

	fgets(name, 30, stdin);
	name[strlen(name) - 1] = '\0';
	printf("# Ű �Է�(cm����) : ");
	scanf("%lf", &height);

	printf("# �����Է�(M/F) : ");
	scanf(" %c", &gender);

	if (gender == 'M') {
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.", name, height);
	}
	else if (gender == 'F') {
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.", name, height);
	}
	return 0;

}