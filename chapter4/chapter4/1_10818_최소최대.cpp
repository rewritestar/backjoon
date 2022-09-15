#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int count;
	int i = 0;

	scanf("%d", &count);
	int* arr = new int[count];
	for (i = 0; i < count; i++)
		scanf("%d", arr + i);
	int min = arr[0], max = arr[0];
	for (i = 0; i < count; i++) {
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d %d", min, max);
	return 0;
}
