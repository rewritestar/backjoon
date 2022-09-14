#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int count;
	int result = 0;
	scanf("%d", &count);
	for (int i = 1; i <= count; i++) {
		result += i;
	}
	printf("%d", result);
	return 0;
}