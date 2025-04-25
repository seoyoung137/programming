//파일명 : ch03 - 01.c
//내용 : PA01. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성.
//작성자 : 윤서영
//날짜 : 2025.04.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sSfsfase(void) {
	int side;

	printf("한 변의 길이? ");
	scanf("%d", &side);

	printf("정사각형의 넓이: %d\n", side * side);
	printf("정사각형의 둘레: %d\n", 4 * side);
}

int main() {
	sSfsfase();
	return 0;
}
