//파일명 : ch04 - 06.c
//내용: chap04 - 06 문제 - 점 A의 좌표 (x1, y1)과 점 B의 좌표 (x2, y2)를 입력받아 두 점 A, B를 지나는 직선의 기울기를 구하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.09
//버전 : v0.1

#include <stdio.h>

void ConvertTime(void);

int main(void) {
    ConvertTime();
    return 0;
}

void ConvertTime(void) {
    int h, m, s, input;

    printf("재생시간(초)? ");
    scanf("%d", &input);

    m = input / 60;
    h = m / 60;
    s = input % 60;
    m = m % 60;

    printf("재생시간은 %d시간 %d분 %d초입니다.\n", h, m, s);
}


#include <stdio.h>

void CalculateSlope(void);

int main(void) {
    CalculateSlope();
    return 0;
}

void CalculateSlope(void) {
    float x1, y1, x2, y2, slope;

    printf("한 점의 좌표 (x1, y1)? ");
    scanf("%f %f", &x1, &y1);

    printf("또 다른 점의 좌표 (x2, y2)? ");
    scanf("%f %f", &x2, &y2);

    // 분모가 0인 경우(기울기 무한대) 체크
    if (x2 - x1 == 0) {
        printf("기울기를 계산할 수 없습니다. (x2 - x1 = 0)\n");
        return;
    }

    slope = (y2 - y1) / (x2 - x1);

    printf("직선의 기울기: %.2f\n", slope);

    return;
}


