//���ϸ� : ch05 - 05.c
//����: chap05 - 08 ���� - ��Ʈ ������ �����ϴ� ���⸦ ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.22
//���� : v0.1

#include<stdio.h>

void bit_operation();

int main(void) {
    bit_operation();
    return 0;
}

void bit_operation() {
    int a, b;
    char c;

    printf("��Ʈ �����? ");
    scanf_s("%i %c %i", &a, &c, 20, &b);

    // �Է¹��� ��Ʈ ������� ����
    if (c == '&') {
        printf("%X & %X = %X", a, b, a & b);
    }
    else if (c == '|') {
        printf("%X | %X = %X", a, b, a | b);
    }
    else if (c == '^') {
        printf("%X ^ %X = %X", a, b, a ^ b);
    }
    else {
        printf("�ùٸ� ���� �Է��� �ּ���.\n");
    }

    return;
}


