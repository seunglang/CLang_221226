/* ���� ���ǹ� */
#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int num1, num2, res;

	printf("�ΰ��� ������ <spacebar>�� �����ؼ� ���ʷ� �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);

	if (num2 != 0) { // �� ��° �ǿ����ڰ� 0�� �ƴϸ� ������ ���� �� �Է�
		res = num1 / num2;
		printf("%d�� %d�� ���� �� : %d\n", num1, num2, res);
	}
	else {
		// �� ��° �ǿ����ڰ� 0�̸� ���� �޽��� ���
		printf("DIV/0 Error : 0���� ���� �� �����ϴ�.\n");
	}

	return 0;
}