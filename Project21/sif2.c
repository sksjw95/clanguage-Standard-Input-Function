#include<stdio.h>
void main() {
	/*int input_data;
	input_data = getchar();
	printf("first input : %c\n", input_data);
	input_data = getchar();
	printf("second input : %c\n", input_data);
	 ������: ù��° getchar()�� ����������  �۵��ϳ� �ι�° ������ getchar()�� ������ �ȵǸ�
	/second input : --> �̷��� ����� �ȴ�.*/

	//�ذ� ��� 1
	/*int input_data;
	input_data = getchar();
	getchar();// enter�� Ű���� �����Ѵ�.
	printf("first input : %c\n", input_data);
	input_data = getchar();
	getchar();// enter�� Ű���� �����Ѵ�.
	printf("second input : %c\n", input_data);*/

	//�ذ� ��� 2
	int input_data = getchar();
	rewind(stdin);
	printf("first input : %c\n", input_data);
	input_data = getchar();
	rewind(stdin);
	printf("second inkpet; %c\n", input_data);
}