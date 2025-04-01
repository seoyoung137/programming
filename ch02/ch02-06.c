//파일명 : ch02 - 06.c
//내용: PA10.정수를 8진수,10진수,16진수 중 하나로 입력받아 8진수, 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램을 작성. 8진수를 입력할 때는 앞에 0을 붙여서 012처럼 입력하고, 16진수를 입력할 때는 앞에 0x를 붙여서 0x12처럼 입력한다.
//작성자 : 윤서영
//날짜 : 2025.04.01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	char type;

	// 사용자 입력 받기
	printf("입력할 정수의 진법을 선택하세요 (8, 10, 16):");
	scanf(" %c", &type); // 공백을 넣어 이전 입력 버퍼를 비운다.

	// 진법에 따라 입력 받기
	if (type == '8')
	{
		printf("8진수로 입력한 숫자를 입력하세요: ");
		scanf("%o", &num); // 8진수 입력
	}
	else if (type == '10')
	{
		printf("10진수로 입력한 숫자를 입력하세요: ");
		scanf("%d", &num); // 10진수 입력
	}
	else if (type == '16')
	{
		printf("16진수로 입력한 숫자를 입력하세요: ");
		scanf("%x", &num); // 16진수 입력
	}
	else
	{
		printf("잘못된 입력입니다.\n");
		return 1;
	}

	//각 진법으로 출력
	printf("입력한 값의 8진수: %o\n", num);
	printf("입력한 값의 10진수: %o\n", num);
	printf("입력한 값의 16진수: %X\n", num);

	return 0;
}