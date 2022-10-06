#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int x = 0, y = 0;
	int n;
	cin >> n;

	for (int i = 0; 5 * i <= n; i++) {
		for (int j = 0; 3 * j + 5 * i <= n; j++) {
			if (3 * j + 5 * i == n) {
				x = i;
				y = j;
			}
		}
	}
	//cout << "x :" << x << "y: " << y << "\n";

	if (!x && !y) {
		cout << -1;
	}
	else {
		cout << x + y;
	}
}