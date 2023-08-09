//scanf_s 함수를 사용하여 문자열 값 입력 받기
// scanf_s ("%s",&문자열 변수,sizeof(변수명))
#include<stdio.h>
void main() {
	char data1[10];
	scanf_s("%s", &data1, sizeof(data1));
	printf("문자열 : %s", data1);
}