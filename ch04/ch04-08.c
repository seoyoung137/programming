//���ϸ� : ch04 - 08.c
//����: chap04 - 09 ���� - �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void ConvertTime(void);

int main(void) {
    ConvertTime();
    return 0;
}

void ConvertTime(void) {
    int h, m, s, input;

    printf("����ð�(��)? ");
    scanf("%d", &input);

    m = input / 60;
    h = m / 60;
    s = input % 60;
    m = m % 60;

    printf("����ð��� %d�ð� %d�� %d���Դϴ�.\n", h, m, s);
}
