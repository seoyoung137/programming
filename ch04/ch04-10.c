//���ϸ� : ch04 - 10.c
//���� : chap04 - 16 ���� - ��ǻ�� �ý��ۿ��� 32��Ʈ �������� ������ ����Ʈ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateTrueColor(void);

int main(void) {
    CalculateTrueColor();
    return 0;
}

void CalculateTrueColor(void) {
    int r, g, b;
    int color = 0;

    printf("red? ");
    scanf ("%d", &r);
    printf("green? ");
    scanf ("%d", &g);
    printf("blue? ");
    scanf ("%d", &b);

    // 255���� ū ���� 0���� ó��
    if (r > 255) r = 0;
    if (g > 255) g = 0;
    if (b > 255) b = 0;

    // ��Ʈ �������� RGB ����
    color = color | (r << 16);
    color = color | (g << 8);
    color = color | b;

    printf("RGB Ʈ���÷�: %06X\n", color);
}
