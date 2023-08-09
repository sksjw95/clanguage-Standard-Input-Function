// scanf_s 함수로 문자열을 입력 받을 때 주의할 점
#include<stdio.h>
void main() {
	//char data1[50];
	//scanf_s("%s", &data1,sizeof(data1));
	//printf("주소 : %s", data1);
	// 입력을 'incheon yeonsu'로 한다면 '인천'만 출력된다.
	// 왜냐면 scanf_s 함수는 enter와 띄어쓰기로 입력을 구분하기 때문에
	char data1[50];
	gets(data1);
	printf("주소 : %s", data1);
}