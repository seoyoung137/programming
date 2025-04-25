//파일명 : ch05 - 03.c
//내용 : chap05 - 04 문제 - 연도를 입력받아 윤년인지 검사하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.22
//버전 : v0.1

#include <stdio.h>

// 함수 선언
int inputYear();                  // 연도 입력 함수
int isLeapYear(int year);         // 윤년 여부 판별 함수
void printResult(int year, int result); // 결과 출력 함수

int main(void) {
    int year;
    int result;

    year = inputYear();              // 연도 입력
    result = isLeapYear(year);       // 윤년 여부 확인
    printResult(year, result);       // 결과 출력

    return 0;
}

// 연도 입력 함수 정의
int inputYear() {
    int year;
    printf("연도? ");
    scanf_s("%d", &year);
    return year;
}

// 윤년 판별 함수 정의 (윤년이면 1, 아니면 0 반환)
int isLeapYear(int year) {
    if (year % 400 == 0)
        return 1;
    else if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
}

// 결과 출력 함수 정의
void printResult(int year, int result) {
    if (result)
        printf("%d년은 윤년입니다.\n", year);
    else
        printf("%d년은 윤년이 아닙니다.\n", year);
}