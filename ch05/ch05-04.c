//파일명 : ch05 - 04.c
//내용 : chap05 - 05 문제 - 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는섭씨 온도로 변환하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.22
//버전 : v0.1

#include<stdio.h>

// 온도 변환 함수 선언
void convertTemperature(float a, char b);

int main(void) {
    float a;
    char b;

    // 온도 입력
    printf("온도? ");
    scanf_s("%f %c", &a, &b, 20);

    // 온도 변환 함수 호출
    convertTemperature(a, b);

    return 0;
}

// 온도 변환 함수 정의
void convertTemperature(float a, char b) {
    // c 또는 C 입력 시 섭씨를 화씨로 변환
    if (b == 'c' || b == 'C') {
        printf("%.2f C ==> %.2f F ", a, a * 9 / 5 + 32);
    }
    // f 또는 F 입력 시 화씨를 섭씨로 변환
    if (b == 'f' || b == 'F') {
        printf("%.2f F ==> %.2f C ", a, (a - 32) * 5 / 9);
    }
}
