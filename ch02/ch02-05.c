//���ϸ� : ch02 - 05.c
//���� : PA09.16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�ۼ��� : ������
//��¥ : 2025.04.01

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int hexNumber;
	//����� �Է� �ޱ�
	printf("16���� ������ �Է��ϼ��� (��: 0x1A): ");
	scanf("%x", &hexNumber); // scanf_s() ��� scanf ()���;

	//10������ ���
	printf("�Է��� 16������ 10���� �� : %d\n", hexNumber);

	return 0;
}