// 문자열 형식의 숫자를 정수로 변환하기(아스키코드 이용)
#include<stdio.h>
void main() {
	int pos_num = 100, num = 0, temp_num;
	char num_string[4] = "123";

	for (int i = 0; i < 3; i++) {
		temp_num = num_string[i] - '0';
		num = num + temp_num * pos_num;
		pos_num = pos_num / 10;
	}
	printf("%s -> %d\n", num_string, num);
}