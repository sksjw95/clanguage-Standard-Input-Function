// scanf_s 함수는 입력 형식 키워드와 자료형이 일치해야 한다.
#include<stdio.h>
void main() {
	char data1 = 5;
	short data2 = 6;
	int data3 = 7;
	printf("%d %d %d", data1, data2, data3);

	scanf_s("%d %d %d", &data1, &data2, &data3);
}