// 연습문제 Q1
#include<stdio.h>
void main() {
	int data1;
	int data2;
	int data3;
	double data4;
	
	scanf_s("%d %d %d", &data1, &data2, &data3);

	data4 = (data1 + data2 + data3) / 3;
	printf(" 평균 : %d + %d + %d / 3 = %f", data1, data2, data3,data4);
}