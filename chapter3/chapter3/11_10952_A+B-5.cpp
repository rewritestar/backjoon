#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int num1, num2;
	int i = 0;
	int* arr = new int[100];
	//�����Ҵ�, 100�� �Ѱ��� ������ ����
	do {
		scanf("%d %d", &num1, &num2);
		arr[i++] = num1 + num2;
	} while (num1 && num2);
	i = 0;
	while (arr[i] != 0) {
		printf("%d\n", arr[i++]);
	}
	return 0;
}