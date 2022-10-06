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
	//�Ҽ�
	//1�� �ƴϾ�� �Ѵ�.
	//2�� �����ϰ� ¦���� �ƴϾ�� �Ѵ�.
	// 1�� �ڽ��� ������ ����� ����� �Ѵ�.
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