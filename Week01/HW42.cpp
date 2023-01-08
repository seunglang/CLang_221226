#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	char alpabet;
	printf("영문자 대문자 입력('A'~'Z) : ");
	scanf(" %c[A-Z]", &alpabet);

	for (int i = 0; i <= (alpabet - 'A'); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c", alpabet - j);
		}
		printf("\n");
	}

	return 0;
}
