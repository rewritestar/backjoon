#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	int one, ten, hun;
	hun = num2 / 100;
	ten = (num2 % 100) /10;
	one = (num2 % 100) % 10;
	printf("%d\n", num1 * one);
	printf("%d\n", num1 * ten);
	printf("%d\n", num1 * hun);
	hun *= 100;
	ten *= 10;
	printf("%d\n", num1 * hun + num1 * ten + num1 * one);
	return 0;
}