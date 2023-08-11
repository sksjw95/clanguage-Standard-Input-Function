#include<stdio.h>
#include<string.h>
void main() {
	char data1[32];
	char data2[32];
	int length;
	//gets(data1);
	//gets(data2);

	fgets(data1, 8, stdin);
	fgets(data2, 8, stdin);
	
	length = strlen(data1);
	if (length > 0) {
		data1[length - 1] = 0;
	}
	strcat_s(data1, sizeof(data1), data2);
	printf("%s", data1);
}