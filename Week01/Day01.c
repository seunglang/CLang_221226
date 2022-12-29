/* 택일 조건문 */
#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int num1, num2, res;

	printf("두개의 정수를 <spacebar>로 구분해서 차례로 입력하세요 : ");
	scanf("%d %d", &num1, &num2);

	if (num2 != 0) { // 두 번째 피연산자가 0이 아니면 나누기 수행 후 입력
		res = num1 / num2;
		printf("%d를 %d로 나눈 몫 : %d\n", num1, num2, res);
	}
	else {
		// 두 번째 피연산자가 0이면 에러 메시지 출력
		printf("DIV/0 Error : 0으로 나눌 수 없습니다.\n");
	}

	return 0;
}