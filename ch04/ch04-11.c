//파일명 : ch04 - 17.c
//내용: chap04 - 17 문제 - 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다. 7번째비트만 1인 값, 15번째비트만 1인값, 23번째 비트만 1인 값, 31번재 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void PrintBitShiftResults(void);

int main(void) {
    PrintBitShiftResults();
    return 0;
}

void PrintBitShiftResults(void) {
    unsigned short a = 2;

    // 쉬프트 연산으로 값을 구한다.
    printf(" 7번 비트만 1인 값: %08x %d\n", a << 6, a << 6);
    printf("15번 비트만 1인 값: %08x %d\n", a << 14, a << 14);
    printf("23번 비트만 1인 값: %08x %d\n", a << 22, a << 22);
    printf("31번 비트만 1인 값: %08x %d\n", a << 30, a << 30);
}
