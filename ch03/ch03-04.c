#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Calculate_work(void);

int main()
{
	Calculate_work();
}

void Calculate_work(void)
{
	double force, distance, work;

	printf("힘(N)?");
	scanf("%lf", &force);

	printf("이동거리(m)? ");
	scanf("%lf", &distance);

	work = force * distance;

	printf("일의 양: %.2lf", work);

	return;
}