#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define m2 = 0.3025

int main(void) {
    double a, b;

    printf("����Ʈ�� ����(��������)? ");
    scanf("%lf", &a);

    b = a * m2;

    // pritnf�� �ȿ��� ���� ����, % .2f == �Ҽ��� ��° �ڸ����� �ݿø�
    printf("%.2f �������� = %.2f ��", a, b);

    return 0;
}