//scanf_s �Լ��� ����Ͽ� ���ڿ� �� �Է� �ޱ�
// scanf_s ("%s",&���ڿ� ����,sizeof(������))
#include<stdio.h>
void main() {
	char data1[10];
	scanf_s("%s", &data1, sizeof(data1));
	printf("���ڿ� : %s", data1);
}