//파일명 : ch02 - 02.c
//내용: PA02.학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.
//작성자 : 윤서영
//날짜 : 2025.04.01




#include <stdio.h>

int main(void) {
    int student_id;     
    float grade;         

    printf("12: ");
    scanf("%d", &student_id);

    printf("4.3: ");
    scanf("%f", &grade);

    printf("12: %d\n", student_id);
    printf("4.3: %.2f\n", grade);  

    return 0;
}