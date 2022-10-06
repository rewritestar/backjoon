#include <iostream>
using namespace std;

int main() {
	long long num;
	long long count = 0;
	long i = 1;
	cin >> num;
	num -= 1;
	count++;
	if (num <= 0) {
		cout << count;
		return 0;
	}
		
	while (1) {
		if (num - 6*i <= 0) {
			count++;
			break;
		}
		num -= 6 * i;
		i++;
		count++;
	}
	
	cout << count;
}