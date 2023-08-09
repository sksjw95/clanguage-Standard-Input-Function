// scanf_s 를 사용하여 문자 값 입력 받기
// scanf_s("%c",&변수명,sizeof(변수명));
#include<stdio.h>
void main() {
	char data1;
	scanf_s("%c", &data1, sizeof(data1));
	printf("문자열 : %c", data1);
}