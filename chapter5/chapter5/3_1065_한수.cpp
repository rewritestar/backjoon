#include <stdio.h>
#pragma warning(disable:4996)
int check(int x) {
	if (x < 100) return 1;
	int gap =  x % 10 - ((x / 10) % 10);
	x = x / 10;
	while (x > 9) {
		int one = x % 10;
		int ten = (x / 10) % 10;
		if (gap != one - ten) return 0;
		x = x / 10;
	}
	return 1;
}

int main() {
	int num;
	int count = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
		if (check(i)) count++;
	printf("%d", count);
	return 0;
}