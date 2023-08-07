#include<stdio.h>
void main() {
	int input_data = getc(stdin);
	rewind(stdin);
	printf("first input : %c\n", input_data);
	
	
	
	input_data = getc(stdin);
	rewind(stdin);
	printf("second input : %c\n", input_data);
}