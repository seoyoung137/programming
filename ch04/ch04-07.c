//파일명 : ch04 - 08.c
//내용: chap04 - 08 문제 - 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h> // pow() 함수

#define PI 3.141592

void CalculateSphereVolume(void);

int main(void) {
    CalculateSphereVolume();
    return 0;
}

void CalculateSphereVolume(void) {
    double radius, volume;

    printf("반지름의 길이? ");
    scanf("%lf", &radius);

    volume = 4.0 * PI * pow(radius, 3) / 3.0;

    printf("구의 부피: %.2lf\n", volume);
}
