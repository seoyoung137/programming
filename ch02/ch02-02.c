//���ϸ� : ch02 - 02.c
//����: PA02.�л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.
//�ۼ��� : ������
//��¥ : 2025.04.01

#define _CRT_SECURE_NO_WARNINS

#include <stdio.h>

int main(void) {
    int student_id;     
    float grade;         

    printf("12: ");
    scanf_s("%d", &student_id);

    printf("4.3: ");
    scanf_s("%f", &grade);

    printf("12: %d\n", student_id);
    printf("4.3: %.2f\n", grade);  

    return 0;
}