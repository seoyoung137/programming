//파일명 : ch05 - 01.c
//내용 : chap05 - 01 문제 - 점의 좌표(x, y)를 입력받아 스크린 상의선택 영역 내의 점인지 검사하는 프로그램.
//작성자 : 윤서영
//날짜 : 2025.04.22
//버전 : v0.1

#include <stdio.h>

void checkArea();  // 함수 선언

int main(void) {
    checkArea();  // checkArea 함수 호출
    return 0;
}

void checkArea() {
    int left, top, right, bottom;
    int x, y;

    // 좌상단점 (left, top) 입력 받기
    printf("선택 영역의 좌상단점 (left, top)? ");
    scanf_s("%d %d", &left, &top);

    // 우하단점 (right, bottom) 입력 받기
    printf("선택 영역의 우하단점 (right, bottom)? ");
    scanf_s("%d %d", &right, &bottom);

    // 점의 좌표 (x, y) 입력 받기
    printf("점의 좌표 (x, y)? ");
    scanf_s("%d %d", &x, &y);

    // 대소비교를 통해 영역 안의 점인지 아닌지 확인
    if (left <= x && x <= right && top <= y && y <= bottom) {
        printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
    }
    else {
        printf("직사각형 모양의 선택 영역 안이 아닙니다.\n");
    }
}

