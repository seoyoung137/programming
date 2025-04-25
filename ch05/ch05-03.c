//���ϸ� : ch05 - 03.c
//���� : chap05 - 04 ���� - ������ �Է¹޾� �������� �˻��ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.22
//���� : v0.1

#include <stdio.h>

// �Լ� ����
int inputYear();                  // ���� �Է� �Լ�
int isLeapYear(int year);         // ���� ���� �Ǻ� �Լ�
void printResult(int year, int result); // ��� ��� �Լ�

int main(void) {
    int year;
    int result;

    year = inputYear();              // ���� �Է�
    result = isLeapYear(year);       // ���� ���� Ȯ��
    printResult(year, result);       // ��� ���

    return 0;
}

// ���� �Է� �Լ� ����
int inputYear() {
    int year;
    printf("����? ");
    scanf_s("%d", &year);
    return year;
}

// ���� �Ǻ� �Լ� ���� (�����̸� 1, �ƴϸ� 0 ��ȯ)
int isLeapYear(int year) {
    if (year % 400 == 0)
        return 1;
    else if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
}

// ��� ��� �Լ� ����
void printResult(int year, int result) {
    if (result)
        printf("%d���� �����Դϴ�.\n", year);
    else
        printf("%d���� ������ �ƴմϴ�.\n", year);
}