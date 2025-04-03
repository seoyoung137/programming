//파일명 : ch03 - 01.c
//내용: PA01.정수를 8진수,10진수,16진수 중 하나로 입력받아 8진수, 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램을 작성. 8진수를 입력할 때는 앞에 0을 붙여서 012처럼 입력하고, 16진수를 입력할 때는 앞에 0x를 붙여서 0x12처럼 입력한다.
//작성자 : 윤서영
//날짜 : 2025.04.01

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
