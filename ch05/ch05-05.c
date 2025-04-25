//파일명 : ch05 - 05.c
//내용: chap05 - 08 문제 - 비트 연산을 수행하는 계산기를 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.22
//버전 : v0.1

#include<stdio.h>

void bit_operation();

int main(void) {
    bit_operation();
    return 0;
}

void bit_operation() {
    int a, b;
    char c;

    printf("비트 연산식? ");
    scanf_s("%i %c %i", &a, &c, 20, &b);

    // 입력받은 비트 연산식을 수행
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
        printf("올바른 식을 입력해 주세요.\n");
    }

    return;
}


