#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int count;
	scanf("%d", &count);
	for (int i = 1; i <= count;i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}