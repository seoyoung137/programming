//파일명 : ch03 - 06.c
//내용: PA07. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램 작성.
//작성자 : 윤서영
//날짜 : 2025.04.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Power(void)
{
	double ab;
	printf("실수");
	scanf("%lf", &ab);

	printf("제곱: %e\n", ab * ab);
	printf("세제곱: %e\n", ab * ab * ab);
}

int main()
{
	Power();

	return 0;
}