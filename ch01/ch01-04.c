#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void introMe(void);

int main()
{
	introMe();

	return 0;
}

void introMe(void)
{
	char name[64]; //�̸� ������ ����
	int age; //���� ������ ����
	char hello[256]; //�λ縻 ������ ����

	// 1. �̸�, ����, �λ縻�� �Է¹޴´�.
	printf("�̸� ���� �λ縻�� �Է����ּ���:\n");
	scanf("%s %d %s", name, &age, hello);

	// 2. �̸�, ����, �λ縻�� ����Ѵ�.
	printf("�̸�: %s ����: %d \n �λ縻: %s",
		name, age, hello);

	return;
}