#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int h, m, offset;
	scanf("%d %d", &h, &m);
	scanf("%d", &offset);
	int ch=h, cm=m;
	if (m + offset < 60) {
		cm = m + offset;
	}
	else {
		cm = (m + offset) % 60;
		ch = h + ((m + offset) / 60);
		if (ch > 23) {
			ch %= 24;
		}
	}
	printf("%d %d", ch, cm);
	return 0;
}