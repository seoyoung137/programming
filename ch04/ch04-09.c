//���ϸ� : ch04 - 15.c
//����: chap04 - 15 ���� - ȯ�� ���������� 1.75%�� ������ �ִٰ� �����ϰ� ��-�޷� �Ÿ� �������� ȯ�� �����(%)�� �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �����ϰ�, �����ϰ��� �ϴ� �޷��� ������ �Է¹޾� �� ���� �ش��ϴ��� ����ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void CalculateExchange(void);

int main(void) {
    CalculateExchange();
    return 0;
}

void CalculateExchange(void) {
    double a, b, c;

    printf("��/�޷� �Ÿű�����? ");
    scanf ("%lf", &a);

    printf("ȯ�������(0~100)? ");
    scanf ("%lf", &b);

    printf("�޷� �� �� ȯ���� %lf�Դϴ�.", a + (a * 0.0175 * (1 - (0.01 * b))));

    printf("\n������ �޷�(USD)? ");
    scanf ("%lf", &c);

    printf("USD %.2lf �� �� ==> KRW %.2lf", c, c * (a + (a * 0.0175 * (1 - (0.01 * b)))));
}
