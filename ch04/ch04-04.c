//���ϸ� : ch04 - 04.c
//����: chap04 - 04 ���� - ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���� ���α׷��� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateConcentration(void);

int main(void) {
    CalculateConcentration();
    return 0;
}

void CalculateConcentration(void) {
    float solute, solvent, concentration;

    printf("���(g)? ");
    scanf("%f", &solvent);

    printf("����(g)? ");
    scanf("%f", &solute);

    concentration = solute / (solute + solvent) * 100;
    printf("��: %.2f %%\n", concentration);

    return;
}