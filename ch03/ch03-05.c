//���ϸ� : ch03 - 05.c
//���� : PA06. ����Ʈ�� ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define M 0.3025

void Apt();

int main(void)
{
    Apt();
    return 0;
}

void Apt()
{
    double a, b;

    printf("����Ʈ�� ����(��������)? ");
    scanf("%lf", &a);

    b = a * M;

    // pritnf�� �ȿ��� ���� ����, % .2f == �Ҽ��� ��° �ڸ����� �ݿø�
    printf("%.2f �������� = %.2f ��", a, b);

    return;
}

