//���ϸ� : ch04 - 05.c
//����: chap04 - 05 ���� - �������� ���̸� ������ �Է¹޾� ������� ���Ǹ� ���ϴ� ���α׷��� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateCylinderVolume(void);

int main(void) {
    CalculateCylinderVolume();
    return 0;
}

void CalculateCylinderVolume(void) {
    float radius, height, volume;

    printf("�������� ����? ");
    scanf("%f", &radius);

    printf("����? ");
    scanf("%f", &height);

    volume = 3.141592f * radius * radius * height;

    printf("������� ����: %.2f\n", volume);

    return;
}
