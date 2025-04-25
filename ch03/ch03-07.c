//파일명 : ch03 - 07.c
//내용 : PA10. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램 작성.
//작성자 : 윤서영
//날짜 : 2025.04.03

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

