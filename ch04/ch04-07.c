//���ϸ� : ch04 - 08.c
//����: chap04 - 08 ���� - �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h> // pow() �Լ�

#define PI 3.141592

void CalculateSphereVolume(void);

int main(void) {
    CalculateSphereVolume();
    return 0;
}

void CalculateSphereVolume(void) {
    double radius, volume;

    printf("�������� ����? ");
    scanf("%lf", &radius);

    volume = 4.0 * PI * pow(radius, 3) / 3.0;

    printf("���� ����: %.2lf\n", volume);
}
