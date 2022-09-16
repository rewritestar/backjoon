#include <stdio.h>
#pragma warning(disable:4996)

int d[10000];

int dn(int n) {
	int result = n;
	while (1) {
		result += n % 10;
		n = n / 10;
		if (n < 10) {
			result += n;
			break;
		}
	}
	return result;
}

int main() {
	/*
	for (int dn = 1; dn < 10000; dn++) {
		int exist = 0;
		for (int n = 1; n <= dn; n++) {
			if (d(n) == dn) {
				exist = 1;
				break;
			}
		}
		if (!exist) printf("%d\n", dn);
	}
	*/
	for (int n = 1; n < 10000; n++) {
		d[dn(n)] = 1;
	}
	for (int n = 1; n < 10000; n++) {
		if (!d[n]) printf("%d\n", n);
	}
	return 0;
}