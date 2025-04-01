//파일명 : ch02 - 05.c
//내용: PA09.16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.
//작성자 : 윤서영
//날짜 : 2025.04.01

#include <stdio.h>

int main(void) {
    int hex_number;  // 16진수 저장 변수

    // 사용자로부터 16진수 입력 받기
    printf("16진수 정수를 입력하세요 (예: 0x1A3): ");
    scanf("%x", &hex_number);  // %x를 사용하여 16진수 입력 받기

    // 10진수로 출력
    printf("10진수로 변환: %d\n", hex_number);

    return 0;
}