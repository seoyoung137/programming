//파일명 : ch02 - 03.c
//내용: PA05.몸무게를 입력받아서 출력하는 프로그램 작성. 몸무게는 실수로 입력, 소수점 이하 2자리까지만 출력
//작성자 : 윤서영
//날짜 : 2025.04.01

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double mom;

	printf("몸무게:");
	scanf("%2lf", &mom);

	printf("일력한 몸무게는 %.2fKG 입니다.\n", mom);

	return 0;
}