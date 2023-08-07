// 길이 제한 없이 문자열 형식의 숫자를 정수로 변환하기(1)
#include<stdio.h>
#include<string.h>
void main() {
	int pos_num = 1, num = 0, i, count;
	char num_string[4] = "123";
	count = strlen(num_string);
	for (i = 0; i < count - 1; i++) {
		pos_num = pos_num * 10;
	}
	for (i = 0; i < count; i++) {
		num = num + (num_string[i] - '0') * pos_num;
		pos_num = pos_num / 10;
	}
	printf("%s -> %d\n", num_string, num);
}