//���ϸ� : ch05 - 07.c
//���� : chap05 - 17 ���� - ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷� �ۼ�.
//�ۼ��� : ������
//��¥ : 2025.04.22
//���� : v0.1

#include<stdio.h>

void parking_fee();

int main(void) {
    parking_fee();
    return 0;
}

void parking_fee() {
    int a, b = 0;

    printf("���� �ð�(��)? ");
    scanf_s("%d", &a);

    if (a > 1440) {
        printf("���� �ð��� 24�ð��� ���� �� ����.");
        return;
    }
    if (a < 31) {
        printf("���� ���: 2000��\n");
        return;
    }
    else if (a > 30) {
        b = 2000 + (a - 30) / 10 * 1000;
    }
    if (b > 25000) {
        printf("���� ���: 25000��\n");
        return;
    }
    else {
        printf("���� ���: %d��\n", b + 1000);
        return;
    }
}
