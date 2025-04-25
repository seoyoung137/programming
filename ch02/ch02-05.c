//파일명 : ch02 - 05.c
//내용 : PA09.16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.
//작성자 : 윤서영
//날짜 : 2025.04.01

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int hexNumber;
	//사용자 입력 받기
	printf("16진수 정수를 입력하세요 (예: 0x1A): ");
	scanf("%x", &hexNumber); // scanf_s() 대신 scanf ()사용;

	//10진수로 출력
	printf("입력한 16진수의 10진수 값 : %d\n", hexNumber);

	return 0;
}