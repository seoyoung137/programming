//���ϸ� : ch05 - 04.c
//���� : chap05 - 05 ���� - �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��¼��� �µ��� ��ȯ�ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.22
//���� : v0.1

#include<stdio.h>

// �µ� ��ȯ �Լ� ����
void convertTemperature(float a, char b);

int main(void) {
    float a;
    char b;

    // �µ� �Է�
    printf("�µ�? ");
    scanf_s("%f %c", &a, &b, 20);

    // �µ� ��ȯ �Լ� ȣ��
    convertTemperature(a, b);

    return 0;
}

// �µ� ��ȯ �Լ� ����
void convertTemperature(float a, char b) {
    // c �Ǵ� C �Է� �� ������ ȭ���� ��ȯ
    if (b == 'c' || b == 'C') {
        printf("%.2f C ==> %.2f F ", a, a * 9 / 5 + 32);
    }
    // f �Ǵ� F �Է� �� ȭ���� ������ ��ȯ
    if (b == 'f' || b == 'F') {
        printf("%.2f F ==> %.2f C ", a, (a - 32) * 5 / 9);
    }
}
