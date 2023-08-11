// 연습문제 Q3
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
	printf("이름 : %s, 몸무게 : %lfkg, 키 : %lfcm, 혈액형 : %c형, 심박수 : %d회",
		name, weight, height, blood, hb);
}