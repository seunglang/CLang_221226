#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	char alpabet;
	printf("������ �빮�� �Է�('A'~'Z) : ");
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
