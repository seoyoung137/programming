//���ϸ� : ch03 - 02.c
//����: PA02. ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.03

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