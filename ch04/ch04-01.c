//���ϸ� : ch04 - 01.c
//���� : chap04 - 01 ���� - ������ �ӷ��� �Է¹޾� ��������� ����ϴ� ���α׷�.
//�ۼ��� : ������
//��¥ : 2025.04.09
//���� : v0.1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double getMotionEnergy(double weight, double velocity);

int main(void)
{
	assignment0401();

	return 0;
}

/*
�Լ��� asssignment0401()
���(å��) : ����, �ӷ��� �Է¹���, ��������� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
�Է�: ����
��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
*/

int assignment0401(void)
{
	// 1. ����, �ӵ� �Է¹޾� ����

	double w = 0.0; // ���� kg
	double v = 0.0; // �ӷ� m/s
	printf("���� �ӵ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &w, &v);


	// 2. ������� ���
	double result = getMotionEnergy(w, v);

	// 3. ���� ������� ���
	printf("����=%.2f kg, �ӷ� %.2f m/s �� ��������� %.2f �Դϴ�." ,w , v, result);
     
	return 0;

}

/*
�Լ���: getMotionEnergy()
���(å��): ����, �ӷ� �Է¹޾� ��������� ����Ͽ� ��ȯ
�Է�: ����(kg), �ӷ�(m/s)
��ȯ: �������
*/

double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	// ������ = 1/2 * ���� * �ӵ� * �ӵ�
	energy = 1.0 / 2.0 *  weight * velocity * velocity;

	return energy;
}