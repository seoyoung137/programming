//���ϸ� : ch03 - 01.c
//���� : PA01. �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sSfsfase(void) {
	int side;

	printf("�� ���� ����? ");
	scanf("%d", &side);

	printf("���簢���� ����: %d\n", side * side);
	printf("���簢���� �ѷ�: %d\n", 4 * side);
}

int main() {
	sSfsfase();
	return 0;
}
