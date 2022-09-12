#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	int ch = h, cm = m;
	if (m >= 45) {
		cm = m - 45;
	}
	else {
		if (h == 0) {
			ch = 23;
		}
		else {
			ch -= 1;
		}
		cm = m + 15;
	}
	printf("%d %d", ch, cm);
	return 0;
}