// scanf_s �Լ��� ����Ͽ� ������ �Ǽ� �� �Է� �ޱ�
#include<stdio.h>

void main() {
	int data;
	float float_data;
	double double_data;

	scanf_s("%d", &data);
	scanf_s("%f", &float_data);
	scanf_s("%lf", &double_data);

	printf("input : %d, %f,%lf\n", data, float_data, double_data);
}