#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Power(void)
{
	double ab;
	printf("�Ǽ�");
	scanf("%lf", &ab);

	printf("����: %e\n", ab * ab);
	printf("������: %e\n", ab * ab * ab);
}

int main()
{
	Power();

	return 0;
}