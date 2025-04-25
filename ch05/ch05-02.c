//파일명 : ch05 - 02.c
//내용 : chap05 - 03 문제 - 거스름돈의 금액을입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력.
//작성자 : 윤서영
//날짜 : 2025.04.22
//버전 : v0.1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0503(void);
int gesan(int gus);

int main(void)
{
    assignment0503();
    return 0;
}

int assignment0503(void)
{
    int gus = 0;

    gus = gesan(gus);

    if ((gus / 50000) != 0)
    {
        printf("%7d %2d장\n", 50000, gus / 50000);
        gus %= 50000;
    }
    if ((gus / 10000) != 0)
    {
        printf("%7d %2d장\n", 10000, gus / 10000);
        gus %= 10000;
    }
    if ((gus / 5000) != 0)
    {
        printf("%7d %2d장\n", 5000, gus / 5000);
        gus %= 5000;
    }
    if ((gus / 1000) != 0)
    {
        printf("%7d %2d장\n", 1000, gus / 1000);
        gus %= 1000;
    }
    if ((gus / 100) != 0)
    {
        printf("%7d %2d장\n", 100, gus / 100);
        gus %= 100;
    }
    if ((gus / 10) != 0)
    {
        printf("%7d %2d장\n", 10, gus / 10);
    }

    return 0;
}

int gesan(int gus)
{

    printf("거스름돈 ? ");
    scanf("%d", &gus);

    gus = gus - (gus % 10);
    printf("거스름돈 (10원 미만 절삭): %d\n", gus);

    return gus;  
}