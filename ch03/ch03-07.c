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

	printf("원/달러 환율? ");
	scanf_s("%f", &b);

	// % .2f == 소수점 둘째 자리까지 출력
	printf("USD %.2f = KRW %.2F", a, a * b);

	return ;
	
}

