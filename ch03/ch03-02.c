#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;

	printf("������ ����? ");
	scanf_s("%d", &a);
	printf("������ ����? ");
	scanf_s("%d", &b);

	//printf�� �ȿ��� ���� ����
	printf("���簢���� ����: %d\n", a * b);
	printf("���簢���� �ѷ�: %d\n", 2 * (a + b));

	return 0;
}