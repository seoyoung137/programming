//���ϸ� : ch05 - 01.c
//���� : chap05 - 01 ���� - ���� ��ǥ(x, y)�� �Է¹޾� ��ũ�� ���Ǽ��� ���� ���� ������ �˻��ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.22
//���� : v0.1

#include <stdio.h>

void checkArea();  // �Լ� ����

int main(void) {
    checkArea();  // checkArea �Լ� ȣ��
    return 0;
}

void checkArea() {
    int left, top, right, bottom;
    int x, y;

    // �»���� (left, top) �Է� �ޱ�
    printf("���� ������ �»���� (left, top)? ");
    scanf_s("%d %d", &left, &top);

    // ���ϴ��� (right, bottom) �Է� �ޱ�
    printf("���� ������ ���ϴ��� (right, bottom)? ");
    scanf_s("%d %d", &right, &bottom);

    // ���� ��ǥ (x, y) �Է� �ޱ�
    printf("���� ��ǥ (x, y)? ");
    scanf_s("%d %d", &x, &y);

    // ��Һ񱳸� ���� ���� ���� ������ �ƴ��� Ȯ��
    if (left <= x && x <= right && top <= y && y <= bottom) {
        printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
    }
    else {
        printf("���簢�� ����� ���� ���� ���� �ƴմϴ�.\n");
    }
}

