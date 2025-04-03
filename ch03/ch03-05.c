#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define m2 = 0.3025

int main(void) {
    double a, b;

    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &a);

    b = a * m2;

    // pritnf문 안에서 연산 가능, % .2f == 소수점 둘째 자리에서 반올림
    printf("%.2f 제곱미터 = %.2f 평", a, b);

    return 0;
}