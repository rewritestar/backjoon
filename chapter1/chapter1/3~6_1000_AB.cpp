#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	// 3�� printf("%d", num1 + num2);
	// 4�� printf("%d", num1 - num2);
	// 5�� printf("%d", num1 * num2);
	double result = (double)num1 / (double)num2;
	printf("%.9Lf", result);
	return 0;
}

