#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define CHARCOUNT 80
int main() {
	int count;
	char s[CHARCOUNT];
	scanf("%d", &count);
	int* result = new int[count];
	int correct = 0;
	for (int i = 0; i < count; i++) {
		result[i] = 0;
		scanf("%s", s);
		for (int j = 0; j < strlen(s); j++) {
			for (int k = 0; k <= j; k++) {
				if (s[k] == 'O') {
					correct++;
				}
				else {
					correct = 0;
				}
			}
			result[i] += correct;
			correct = 0;
		}
	}

	for (int i = 0; i < count; i++) {
		printf("%d\n", result[i]);
	}

	return 0;
}