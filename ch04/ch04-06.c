//���ϸ� : ch04 - 06.c
//����: chap04 - 06 ���� - �� A�� ��ǥ (x1, y1)�� �� B�� ��ǥ (x2, y2)�� �Է¹޾� �� �� A, B�� ������ ������ ���⸦ ���ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

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


#include <stdio.h>

void CalculateSlope(void);

int main(void) {
    CalculateSlope();
    return 0;
}

void CalculateSlope(void) {
    float x1, y1, x2, y2, slope;

    printf("�� ���� ��ǥ (x1, y1)? ");
    scanf("%f %f", &x1, &y1);

    printf("�� �ٸ� ���� ��ǥ (x2, y2)? ");
    scanf("%f %f", &x2, &y2);

    // �и� 0�� ���(���� ���Ѵ�) üũ
    if (x2 - x1 == 0) {
        printf("���⸦ ����� �� �����ϴ�. (x2 - x1 = 0)\n");
        return;
    }

    slope = (y2 - y1) / (x2 - x1);

    printf("������ ����: %.2f\n", slope);

    return;
}


