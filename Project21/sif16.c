// scanf_s �Լ��� ���ڿ��� �Է� ���� �� ������ ��
#include<stdio.h>
void main() {
	//char data1[50];
	//scanf_s("%s", &data1,sizeof(data1));
	//printf("�ּ� : %s", data1);
	// �Է��� 'incheon yeonsu'�� �Ѵٸ� '��õ'�� ��µȴ�.
	// �ֳĸ� scanf_s �Լ��� enter�� ����� �Է��� �����ϱ� ������
	char data1[50];
	gets(data1);
	printf("�ּ� : %s", data1);
}