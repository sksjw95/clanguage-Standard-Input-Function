// scanf_s 함수를 사용하여 정수와 실수 값 입력 받기
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