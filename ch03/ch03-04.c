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