//파일명 : ch04 - 03.c
//내용: chap04 - 03 문제 - 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램 작성.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateDensity(void);

int main(void) {
    CalculateDensity();
    return 0;
}

void CalculateDensity(void) {
    float mass, volume, density;

    printf("질량(g)? ");
    scanf("%f", &mass);

    printf("부피(세제곱센티미터)? ");
    scanf("%f", &volume);

    density = mass / volume;
    printf("밀도: %.2f g/cm³\n", density);

    return;
}