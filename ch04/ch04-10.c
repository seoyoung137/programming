//파일명 : ch04 - 10.c
//내용 : chap04 - 16 문제 - 컴퓨터 시스템에서 32비트 데이터의 최하위 바이트부터 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateTrueColor(void);

int main(void) {
    CalculateTrueColor();
    return 0;
}

void CalculateTrueColor(void) {
    int r, g, b;
    int color = 0;

    printf("red? ");
    scanf ("%d", &r);
    printf("green? ");
    scanf ("%d", &g);
    printf("blue? ");
    scanf ("%d", &b);

    // 255보다 큰 값은 0으로 처리
    if (r > 255) r = 0;
    if (g > 255) g = 0;
    if (b > 255) b = 0;

    // 비트 연산으로 RGB 결합
    color = color | (r << 16);
    color = color | (g << 8);
    color = color | b;

    printf("RGB 트루컬러: %06X\n", color);
}
