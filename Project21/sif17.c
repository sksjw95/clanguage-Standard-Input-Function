// scanf_s 함수로 8,10,16 진수 입력 받기
#include<stdio.h>
void main() {
	int num1, num2, num3;
	scanf_s("%o %d %x", &num1, &num2, &num3);
	printf("input : %d, %d, %d \n", num1, num2, num3);
}