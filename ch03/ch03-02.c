//파일명 : ch03 - 02.c
//내용: PA02. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램 작성.
//작성자 : 윤서영
//날짜 : 2025.04.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;

	printf("가로의 길이? ");
	scanf_s("%d", &a);
	printf("세로의 길이? ");
	scanf_s("%d", &b);

	//printf문 안에서 연산 가능
	printf("직사각형의 넓이: %d\n", a * b);
	printf("직사각형의 둘레: %d\n", 2 * (a + b));

	return 0;
}