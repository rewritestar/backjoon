#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	int result;
	if (num1 == num2) {
		if (num2 == num3) {
			result = 10000 + num1 * 1000;
		}
		else {
			result = 1000 + num2 * 100;
		}
	}
	else if (num2 == num3) {
		result = 1000 + num2 * 100;
	}
	else if (num1 == num3) {
		result = 1000 + num1 * 100;
	}
	else {
		int max = num1;
		if (max < num2) max = num2;

		if (max < num3) max = num3;
		result = max * 100;
	}
	printf("%d", result);
	return 0;
}