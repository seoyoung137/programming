//파일명 : ch02 - 02.c
//내용: PA02.학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.
//작성자 : 윤서영
//날짜 : 2025.04.01

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int studentNumber;
	float grade;

	printf("학생의 번호를 입력하세요: ");
	scanf("%d", &studentNumber);

	printf("학생의 학점을 입력하세요: ");
	scanf("%f", &grade);

	printf("%d번 생의 학점은 %.6f입니다.\n", studentNumber, grade);

	return 0;
}
