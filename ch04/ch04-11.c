//���ϸ� : ch04 - 17.c
//����: chap04 - 17 ���� - 32��Ʈ ũ���� ������(��ȣ ���� ������)���� 0~31�� ��Ʈ�� �����Ѵ�. 7��°��Ʈ�� 1�� ��, 15��°��Ʈ�� 1�ΰ�, 23��° ��Ʈ�� 1�� ��, 31���� ��Ʈ�� 1�� ���� ���ؼ� 16������ 10������ ����ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void PrintBitShiftResults(void);

int main(void) {
    PrintBitShiftResults();
    return 0;
}

void PrintBitShiftResults(void) {
    unsigned short a = 2;

    // ����Ʈ �������� ���� ���Ѵ�.
    printf(" 7�� ��Ʈ�� 1�� ��: %08x %d\n", a << 6, a << 6);
    printf("15�� ��Ʈ�� 1�� ��: %08x %d\n", a << 14, a << 14);
    printf("23�� ��Ʈ�� 1�� ��: %08x %d\n", a << 22, a << 22);
    printf("31�� ��Ʈ�� 1�� ��: %08x %d\n", a << 30, a << 30);
}
