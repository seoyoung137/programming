//파일명 : ch02 - 04.c
//내용: PA07.커피 사이즈(S,T,G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오. 커피 사이즈는 S,T,G 세 가지 문자 중 하나로 입력받는다.
//작성자 : 윤서영
//날짜 : 2025.04.01

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char size;
	int quantity;

	// 사용자 입력 받기
	printf("커피 사이즈를 입력하세요 (S, T, G): ");
	scanf_s(" %c", &size, 1);  // 크기 지정 필요

	printf("주문수량을 입력하세요: ");
	scanf_s("%d", &quantity);

	// 일력값 출력
	printf("주문하신 커피 사이즈: %c, 수량: %d\n", size, quantity);

		return 0;
}