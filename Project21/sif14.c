// scanf_s �� ����Ͽ� ���� �� �Է� �ޱ�
// scanf_s("%c",&������,sizeof(������));
#include<stdio.h>
void main() {
	char data1;
	scanf_s("%c", &data1, sizeof(data1));
	printf("���ڿ� : %c", data1);
}