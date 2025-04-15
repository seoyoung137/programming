//파일명 : ch04 - 08.c
//내용: chap04 - 09 문제 - 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void ConvertTime(void);

int main(void) {
    ConvertTime();
    return 0;
}

void ConvertTime(void) {
    int h, m, s, input;

    printf("재생시간(초)? ");
    scanf("%d", &input);

    m = input / 60;
    h = m / 60;
    s = input % 60;
    m = m % 60;

    printf("재생시간은 %d시간 %d분 %d초입니다.\n", h, m, s);
}
