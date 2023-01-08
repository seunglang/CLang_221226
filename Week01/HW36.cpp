#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {

		if (i % 3 == 0 && i % 5 == 0) {
			printf("%d ", i);
		}
		else if (i % 3 == 0) {
			printf("* ");
		}
		else if (i % 5 == 0) {
			printf("# ");
		}
		else {
			printf("%d ", i);
		}
		if (i % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}