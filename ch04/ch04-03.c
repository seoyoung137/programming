//���ϸ� : ch04 - 03.c
//����: chap04 - 03 ���� - ������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateDensity(void);

int main(void) {
    CalculateDensity();
    return 0;
}

void CalculateDensity(void) {
    float mass, volume, density;

    printf("����(g)? ");
    scanf("%f", &mass);

    printf("����(��������Ƽ����)? ");
    scanf("%f", &volume);

    density = mass / volume;
    printf("�е�: %.2f g/cm��\n", density);

    return;
}