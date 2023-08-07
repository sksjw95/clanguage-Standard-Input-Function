// gets 함수로 문자열을 입력 받을 때 입력 취소까지 처리하기

#include<stdio.h>
void main() {
	char input_string[10];
	if (NULL != gets(input_string)) {
		printf("input : %s\n", input_string);
	}
	else {
		printf("input -> Canceled\n");
	}
}