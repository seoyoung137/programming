//���ϸ� : ch02 - 04.c
//����: PA07.Ŀ�� ������(S,T,G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. Ŀ�� ������� S,T,G �� ���� ���� �� �ϳ��� �Է¹޴´�.
//�ۼ��� : ������
//��¥ : 2025.04.01

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char size;
	int quantity;

	// ����� �Է� �ޱ�
	printf("Ŀ�� ����� �Է��ϼ��� (S, T, G): ");
	scanf_s(" %c", &size, 1);  // ũ�� ���� �ʿ�

	printf("�ֹ������� �Է��ϼ���: ");
	scanf_s("%d", &quantity);

	// �Ϸ°� ���
	printf("�ֹ��Ͻ� Ŀ�� ������: %c, ����: %d\n", size, quantity);

		return 0;
}