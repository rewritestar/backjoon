#include <stdio.h>
int main() {
	int count, score;
	scanf("%d", &count);
	int* origin = new int[count];
	double avg = 0.0;
	for (int i = 0; i < count; i++) {
		scanf("%d", origin + i);
	}
	int max = origin[0];
	for (int i = 0; i < count; i++) {
		if (max < origin[i]) max = origin[i];
		;
	}
	for (int i = 0; i < count; i++) {
		avg += (double)origin[i] / max * 100;
	}
	printf("%0.2f", avg / count);

	return 0;
}