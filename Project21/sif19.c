//scanf_s �Լ��� ����Ͽ� ���� �Է� �ޱ�(1)
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
// ġ������ ������ �ִ�. "abc"��� �Է��ϸ� Incorrect Age!!�� ���� �ݺ����� ��µȴ�.
// ������ scanf_s("%d", &num);���� �Է� ������ %d�� �ߴµ� ���� ������ ���� ������ �ƴ϶�
// ���ڿ� �����̱� ������ scanf_s �Լ��� "abc(enter)"�� ���ۿ� �״�� �ΰ� ������ 0�� ��ȯ
// �׷��� Incorrect Age!! �� ����� �Ǹ� ���ۿ�  "abc(enter)"�� �����ֱ� ������Incorrect Age!! �� ������ �ݺ�
// ���� scanf_s �Լ��� ������ �����ߴ��� Ȯ���Ͽ� �����ߴٸ� �Է� ���ۿ� ����� ������  rewind�Լ���
// ���� �ָ� ������ �ذ�!!! 