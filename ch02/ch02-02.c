//���ϸ� : ch02 - 02.c
//����: PA02.�л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.
//�ۼ��� : ������
//��¥ : 2025.04.01

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int studentNumber;
	float grade;

	printf("�л��� ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &studentNumber);

	printf("�л��� ������ �Է��ϼ���: ");
	scanf("%f", &grade);

	printf("%d�� ���� ������ %.6f�Դϴ�.\n", studentNumber, grade);

	return 0;
}
