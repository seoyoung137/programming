//���ϸ� : ch03 - 07.c
//���� : PA10. ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void won();

int main(void)
{
	won();
	return 0;
}

void won()
{
	float a, b;

	printf("USD? ");
	scanf_s("%f", &a);

	printf("��/�޷� ȯ��? ");
	scanf_s("%f", &b);

	// % .2f == �Ҽ��� ��° �ڸ����� ���
	printf("USD %.2f = KRW %.2F", a, a * b);

	return ;
	
}

