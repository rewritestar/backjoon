#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	// 3¹ø printf("%d", num1 + num2);
	// 4¹ø printf("%d", num1 - num2);
	// 5¹ø printf("%d", num1 * num2);
	double result = (double)num1 / (double)num2;
	printf("%.9Lf", result);
	return 0;
}

