//���ϸ� : ch03 - 04.c
//���� : PA04. ��ü�� ������ ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Calculate_work(void);

int main()
{
	Calculate_work();
}

void Calculate_work(void)
{
	double force, distance, work;

	printf("��(N)?");
	scanf("%lf", &force);

	printf("�̵��Ÿ�(m)? ");
	scanf("%lf", &distance);

	work = force * distance;

	printf("���� ��: %.2lf", work);

	return;
}