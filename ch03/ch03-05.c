#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define M 0.3025

void Apt();

int main(void)
{
    Apt();
    return 0;
}

void Apt()
{
    double a, b;

    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &a);

    b = a * M;

    // pritnf문 안에서 연산 가능, % .2f == 소수점 둘째 자리에서 반올림
    printf("%.2f 제곱미터 = %.2f 평", a, b);

    return;
}

