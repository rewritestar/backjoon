#include <stdio.h>
#pragma warning(disable:4996)
#define ARRCOUNT 10
int main() {
	int i = 0, count = 0, same = 1, ridx=0;
	int arr[ARRCOUNT];
	int remain[ARRCOUNT];
	for (i = 0; i < ARRCOUNT; i++) {
		scanf("%d", arr + i);
		arr[i] = arr[i] % 42;
	}
	remain[0] = arr[0];
	for (i = 0; i < ARRCOUNT; i++) {
		same = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				same = 1;
				break;
			}
		}
		if (!same)
			ridx++;
	}
	printf("%d", ridx);
	return 0;
}