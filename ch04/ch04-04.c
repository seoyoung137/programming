//파일명 : ch04 - 04.c
//내용: chap04 - 04 문제 - 용매의 질량과 용질의 질량을 정수로 입력받아 용액의 퍼센트 농도를 궇는 프로그램을 작성.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateConcentration(void);

int main(void) {
    CalculateConcentration();
    return 0;
}

void CalculateConcentration(void) {
    float solute, solvent, concentration;

    printf("용매(g)? ");
    scanf("%f", &solvent);

    printf("용질(g)? ");
    scanf("%f", &solute);

    concentration = solute / (solute + solvent) * 100;
    printf("농도: %.2f %%\n", concentration);

    return;
}