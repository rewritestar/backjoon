#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int count,num1,num2;
	scanf("%d", &count);
	int* arr = new int[count];
	for (int i = 0; i < count;i++) {
		scanf("%d %d", &num1, &num2);
		arr[i] = num1 + num2;
	}
	for (int i = 0; i < count;i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}