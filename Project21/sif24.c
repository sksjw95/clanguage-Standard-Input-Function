#include<stdio.h>
void main() {
	char n1[50];
	int k1;
	int e1;
	int m1;

	char n2[50];
	int k2;
	int e2;
	int m2;

	char n3[50];
	int k3;
	int e3;
	int m3;
	scanf_s("%s", &n1, sizeof(n1));
	//rewind(stdin);
	scanf_s("%d %d %d", &k1, &e1, &m1);
	rewind(stdin);
	scanf_s("%s", &n2, sizeof(n2));
	//rewind(stdin);
	scanf_s("%d %d %d", &k2, &e2, &m2);
	rewind(stdin);
	scanf_s("%s", &n3, sizeof(n3));
	//rewind(stdin);
	scanf_s("%d %d %d", &k3, &e3, &m3);
	double ave1 = (k1 + e1 + m1) / 3.0;
	double ave2 = (k2 + e2 + m2) / 3.0;
	double ave3 = (k3 + e3 + m3) / 3.0;
	printf("-----------------------------------\n");
	printf("이름  국어 영어 수학 총점 평균 등수\n");
	printf("-----------------------------------\n");
	printf("%s    %d   %d   %d   %d   %lf   1등\n", n3, k3, e3 ,m3, (e3 + k3 + m3), ave3 );
	printf("%s    %d   %d   %d   %d   %lf   2등\n", n2, k2, e2 ,m2, (e2 + k2 + m2), ave2);
	printf("%s    %d   %d   %d   %d   %lf   3등\n", n1, k1, e1,m1, (e1 + k1 + m1), ave1);

}