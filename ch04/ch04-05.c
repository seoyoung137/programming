//파일명 : ch04 - 05.c
//내용: chap04 - 05 문제 - 반지름과 높이를 정수로 입력받아 원기둥의 부피를 구하는 프로그램을 작성.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateCylinderVolume(void);

int main(void) {
    CalculateCylinderVolume();
    return 0;
}

void CalculateCylinderVolume(void) {
    float radius, height, volume;

    printf("반지름의 길이? ");
    scanf("%f", &radius);

    printf("높이? ");
    scanf("%f", &height);

    volume = 3.141592f * radius * radius * height;

    printf("원기둥의 부피: %.2f\n", volume);

    return;
}
