//���ϸ� : ch03 - 03.c
//���� : PA03. ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0303(void);
double calcPositionEnergy(double weight, double height);

int main()
{
    assignment0303();
    return 0;
}

void assignment0303(void)
{
    double kg, m;    // ������ ���̸� ������ ����
    double energy;   // ���� ��ġ�������� ������ ����

    printf("������ ���̸� �Է�: ");
    scanf("%lf %lf", &kg, &m);

    energy = calcPositionEnergy(kg, m);
    printf("��ġ������: %f", energy);
}

double calcPositionEnergy(double weight, double height)
{
    return weight * height * 9.8;
}