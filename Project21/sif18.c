// scanf_s �Լ��� �Է� ���� Ű����� �ڷ����� ��ġ�ؾ� �Ѵ�.
#include<stdio.h>
void main() {
	char data1 = 5;
	short data2 = 6;
	int data3 = 7;
	printf("%d %d %d", data1, data2, data3);

	scanf_s("%d %d %d", &data1, &data2, &data3);
}