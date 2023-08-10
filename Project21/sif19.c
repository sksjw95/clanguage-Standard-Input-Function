//scanf_s 함수를 사용하여 나이 입력 받기(1)
#include<stdio.h>
void main() {
	int num = 0;
	while (1) {
		printf("input age :");
		scanf_s("%d", &num);
		if (num > 0 && num <= 130) {
			break;
		}
		else {
			printf("Incorrect Age!! \n");
		}
	}
	printf("Your age : %d", num);
}
// 치명적인 오류가 있다. "abc"라고 입력하면 Incorrect Age!!가 무한 반복으로 출력된다.
// 원인은 scanf_s("%d", &num);에서 입력 형식을 %d로 했는데 정수 형태의 숫자 패턴이 아니라
// 문자열 패턴이기 때문에 scanf_s 함수가 "abc(enter)"를 버퍼에 그대로 두고 오류값 0을 반환
// 그래서 Incorrect Age!! 가 출력이 되며 버퍼에  "abc(enter)"가 남아있기 때문에Incorrect Age!! 가 무한히 반복
// 따라서 scanf_s 함수의 실행이 실패했는지 확인하여 실패했다면 입력 버퍼에 저장된 내용을  rewind함수로
// 지워 주면 문제가 해결!!! 