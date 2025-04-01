//파일명 : ch02 - 06.c
//내용: PA10.정수를 8진수,10진수,16진수 중 하나로 입력받아 8진수, 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램을 작성. 8진수를 입력할 때는 앞에 0을 붙여서 012처럼 입력하고, 16진수를 입력할 때는 앞에 0x를 붙여서 0x12처럼 입력한다.
//작성자 : 윤서영
//날짜 : 2025.04.01

#include <stdio.h>

int main(void) {
    int number;  // 입력된 정수를 저장할 변수

    // 사용자 입력 받기
    printf("정수를 입력하세요 (8진수: 012, 10진수: 12, 16진수: 0x12): ");
    scanf("%i", &number);  // %i는 입력된 형식(8진수, 10진수, 16진수)을 자동 판별

    // 변환된 값 출력
    printf("8진수: %o\n", number);
    printf("10진수: %d\n", number);
    printf("16진수: %X\n", number);

    return 0;
}