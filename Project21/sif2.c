#include<stdio.h>
void main() {
	/*int input_data;
	input_data = getchar();
	printf("first input : %c\n", input_data);
	input_data = getchar();
	printf("second input : %c\n", input_data);
	 문제점: 첫번째 getchar()는 정상적으로  작동하나 두번째 에서는 getchar()가 실행이 안되며
	/second input : --> 이렇게 출력이 된다.*/

	//해결 방법 1
	/*int input_data;
	input_data = getchar();
	getchar();// enter의 키값을 제거한다.
	printf("first input : %c\n", input_data);
	input_data = getchar();
	getchar();// enter의 키값을 제거한다.
	printf("second input : %c\n", input_data);*/

	//해결 방법 2
	int input_data = getchar();
	rewind(stdin);
	printf("first input : %c\n", input_data);
	input_data = getchar();
	rewind(stdin);
	printf("second inkpet; %c\n", input_data);
}