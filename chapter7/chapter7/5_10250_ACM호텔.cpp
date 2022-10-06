#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int T;
	int H, W, N;
	cin >> T;
	int* num = new int[T];
	int* floor = new int[T];
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		num[i] = ceil((double)N / H);
		if (N % H == 0)
			floor[i] = H;
		else
			floor[i] = N % H;
	}
	for (int i = 0;i < T; i++) {
		if (num[i] < 10) {
			cout << floor[i] << "0" << num[i];
		}
		else {
			cout << floor[i] << num[i];
		}
		cout << "\n";
	}
}