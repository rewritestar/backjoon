#include <iostream>
using namespace std;

//재귀호출 필요

int recur(int k, int n) {
	if (k == 0) {
		return n;
	}
	else {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += recur(k - 1, i);
		}
		return sum;
	}
}

int main() {
	int t;
	cin >> t;
	int* result = new int[t];
	for (int i = 0; i < t; i++) {
		int k, n;
		cin >> k >> n;
		result[i] = recur(k, n);
	}
	for (int i = 0; i < t; i++) {
		cout << result[i]<<"\n";
	}
}