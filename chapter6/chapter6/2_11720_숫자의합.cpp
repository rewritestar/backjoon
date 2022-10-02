#include <string>
#include <iostream>
using namespace std;

int main() {
	int count;
	int sum = 0;
	string str;
	cin >> count;
	cin >> str;
	for (int i = 0; i < count; i++)
		sum += str[i] - '0';
	cout << sum;
	return 0;
}