#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Power(void)
{
	double ab;
	printf("½Ç¼ö");
	scanf("%lf", &ab);

	printf("Á¦°ö: %e\n", ab * ab);
	printf("¼¼Á¦°ö: %e\n", ab * ab * ab);
}

int main()
{
	Power();

	return 0;
}