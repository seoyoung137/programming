//파일명 : ch02 - 03.c
//내용: PA05.몸무게를 입력받아서 출력하는 프로그램 작성. 몸무게는 실수로 입력, 소수점 이하 2자리까지만 출력
//작성자 : 윤서영
//날짜 : 2025.04.01



#include <stdio.h>

int main(void) {
    float weight;  

    
    printf("50: ");
    scanf("%f", &weight);

    
    printf("50.00: %.2f kg\n", weight);

    return 0;
}