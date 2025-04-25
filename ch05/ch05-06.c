//파일명 : ch05 - 06.c
//내용 : chap05 - 09 문제 - 햄버거 가게의 계산서 프로그램을 작성.
//작성자 : 윤서영
//날짜 : 2025.04.22
//버전 : v0.1

#include<stdio.h>

void order_summary();

int main(void) {
    order_summary();
    return 0;
}

void order_summary() {
    int a, b, c;
    int set = 0;

    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
    printf("햄버거 개수? ");
    scanf_s("%d", &a);
    printf("감자튀김 개수? ");
    scanf_s("%d", &b);
    printf("콜라 개수? ");
    scanf_s("%d", &c);

    // 세트의 갯수를 구함
    if (a <= b) {
        if (a <= c) {
            set = a;
        }
    }
    if (b <= a) {
        if (b <= c) {
            set = b;
        }
    }
    if (c <= a) {
        if (c <= b) {
            set = c;
        }
    }

    printf("\n\n상품명		단가	수량	금액\n");

    if (set != 0) {
        printf("세트		6500	 %d	%d\n", set, 6500 * set);
    }
    if (a - set != 0) {
        printf("햄버거		4000	 %d	%d\n", a - set, 4000 * (a - set));
    }
    if (b - set != 0) {
        printf("감자튀김	2000	 %d	%d\n", b - set, 2000 * (b - set));
    }
    if (c - set != 0) {
        printf("감자튀김	2000	 %d	%d\n", c - set, 1500 * (c - set));
    }

    printf("\n--------------------------------------\n\n합계				%d\n", 6500 * set + 4000 * (a - set) + 2000 * (b - set) + 1500 * (c - set));
}
