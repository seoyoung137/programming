//���ϸ� : ch04 - 02.c
//���� : chap04 - 02 ���� - ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void ConvertTemperature(void);

int main(void) {
    ConvertTemperature();
    return 0;
}

void ConvertTemperature(void) {
    float f, c;

    printf("ȭ���µ�? ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;
    printf("%.2f F = %.2f C\n", f, c);

    return;
}



