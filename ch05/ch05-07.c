//파일명 : ch05 - 07.c
//내용 : chap05 - 17 문제 - 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램 작성.
//작성자 : 윤서영
//날짜 : 2025.04.22
//버전 : v0.1

#include<stdio.h>

void parking_fee();

int main(void) {
    parking_fee();
    return 0;
}

void parking_fee() {
    int a, b = 0;

    printf("주차 시간(분)? ");
    scanf_s("%d", &a);

    if (a > 1440) {
        printf("주차 시간은 24시간을 넘을 수 없다.");
        return;
    }
    if (a < 31) {
        printf("주차 요금: 2000원\n");
        return;
    }
    else if (a > 30) {
        b = 2000 + (a - 30) / 10 * 1000;
    }
    if (b > 25000) {
        printf("주차 요금: 25000원\n");
        return;
    }
    else {
        printf("주차 요금: %d원\n", b + 1000);
        return;
    }
}
