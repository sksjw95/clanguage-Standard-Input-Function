// �������� Q3
#include<stdio.h>
void main() {
	char name[8];
	double weight ;
	double height ;
	char blood ;
	int hb ;
	
	scanf_s("%s", &name, sizeof(name));
	//rewind(stdin);
	scanf_s("%lf %lf", &weight, &height);
	rewind(stdin);
	scanf_s("%c",&blood,sizeof(blood));
	//rewind(stdin);
	scanf_s("%d", &hb);
	printf("�̸� : %s, ������ : %lfkg, Ű : %lfcm, ������ : %c��, �ɹڼ� : %dȸ",
		name, weight, height, blood, hb);
}