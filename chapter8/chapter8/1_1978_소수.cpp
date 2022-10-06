#include <iostream>
using namespace std;

int prime(int x) {
	if (x == 2) return 1;
	if (x < 2 || x % 2 == 0) return 0;
	for (int i = 3; i < x; i += 2) {
		if (x % i == 0) return 0;
	}
	return 1;
}

int main() {
	//소수
	//1이 아니어야 한다.
	//2를 제외하고 짝수가 아니어야 한다.
	// 1과 자신을 제외한 약수가 없어야 한다.
	int n;
	cin >> n;
	int count = 0;
	
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		if (prime(p)) {
			count++;
		}
	}
	cout << count;
}