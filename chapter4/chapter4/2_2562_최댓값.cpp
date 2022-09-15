#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int i = 0, midx=0;
	int arr[9];
	for (i = 0; i < 9; i++)
		scanf("%d", arr + i);
	int max = arr[0];
	for (i = 0; i < 9; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	for (i = 0; i < 9; i++)
		if (arr[i] == max)
			midx = i + 1;
	printf("%d\n%d", max, midx);
	return 0;
}