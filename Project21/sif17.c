// scanf_s �Լ��� 8,10,16 ���� �Է� �ޱ�
#include<stdio.h>
void main() {
	int num1, num2, num3;
	scanf_s("%o %d %x", &num1, &num2, &num3);
	printf("input : %d, %d, %d \n", num1, num2, num3);
}