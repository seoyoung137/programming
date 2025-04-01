//파일명 : ch02 - 04.c
//내용: PA07.커피 사이즈(S,T,G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오. 커피 사이즈는 S,T,G 세 가지 문자 중 하나로 입력받는다.
//작성자 : 윤서영
//날짜 : 2025.04.01

#include <stdio.h>

int main(void) {
    char size;  // 커피 사이즈 (문자)
    int quantity;  // 주문 수량 (정수)

    // 사용자 입력 받기
    printf("커피 사이즈를 입력하세요 (S, T, G): ");
    scanf(" %c", &size);  // 앞에 공백 추가하여 이전 입력 버퍼 제거

    printf("주문 수량을 입력하세요: ");
    scanf("%d", &quantity);

    // 입력된 값 출력
    printf("커피 사이즈: %c\n", size);
    printf("주문 수량: %d개\n", quantity);

    return 0;
}