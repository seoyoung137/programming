//���ϸ� : ch02 - 02.c
//����: PA02.�л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.
//�ۼ��� : ������
//��¥ : 2025.04.01




#include <stdio.h>

int main(void) {
    int student_id;     
    float grade;         

    printf("12: ");
    scanf("%d", &student_id);

    printf("4.3: ");
    scanf("%f", &grade);

    printf("12: %d\n", student_id);
    printf("4.3: %.2f\n", grade);  

    return 0;
}