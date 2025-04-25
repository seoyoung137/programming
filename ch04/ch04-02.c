//파일명 : ch04 - 02.c
//내용 : chap04 - 02 문제 - 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void ConvertTemperature(void);

int main(void) {
    ConvertTemperature();
    return 0;
}

void ConvertTemperature(void) {
    float f, c;

    printf("화씨온도? ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;
    printf("%.2f F = %.2f C\n", f, c);

    return;
}



