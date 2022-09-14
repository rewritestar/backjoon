#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int count, num1, num2;
	scanf("%d", &count);
	int* arr = new int[count];
	int* num1Arr = new int[count];
	int* num2Arr = new int[count];
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &num1, &num2);
		num1Arr[i] = num1;
		num2Arr[i] = num2;
		arr[i] = num1 + num2;
	}
	for (int i = 0; i < count; i++) {
		printf("Case #%d: %d + %d = %d\n", i + 1,num1Arr[i], num2Arr[i],  arr[i]);
	}
	return 0;
}