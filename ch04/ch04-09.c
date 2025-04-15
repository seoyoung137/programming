//파일명 : ch04 - 15.c
//내용: chap04 - 15 문제 - 환전 수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매 기준율과 환전 우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아 몇 원에 해당하는지 출력하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateExchange(void);

int main(void) {
    CalculateExchange();
    return 0;
}

void CalculateExchange(void) {
    double a, b, c;

    printf("원/달러 매매기준율? ");
    scanf ("%lf", &a);

    printf("환율우대율(0~100)? ");
    scanf ("%lf", &b);

    printf("달러 살 때 환율은 %lf입니다.", a + (a * 0.0175 * (1 - (0.01 * b))));

    printf("\n구입할 달러(USD)? ");
    scanf ("%lf", &c);

    printf("USD %.2lf 살 때 ==> KRW %.2lf", c, c * (a + (a * 0.0175 * (1 - (0.01 * b)))));
}
