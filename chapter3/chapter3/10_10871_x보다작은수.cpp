#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int count, x;
	scanf("%d %d", &count, &x);
	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < count; i++) {
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}
	return 0;
}