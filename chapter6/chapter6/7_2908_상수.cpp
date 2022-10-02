#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
using namespace std;

int main() {
	string num1, num2;
	cin >> num1;
	cin >> num2;
	string rev1 = num1;
	string rev2 = num2;
	for (int i = 0; i < num1.size() / 2; i++) {
		rev1[i] = num1[num1.size() - 1 - i];
		rev1[num1.size() - 1 - i] = num1[i];
		rev2[i] = num2[num2.size() - 1 - i];
		rev2[num2.size() - 1 - i] = num2[i];
	}
	int result1 = stoi(rev1);
	int result2 = stoi(rev2);
	if (result1 > result2)
		cout << result1;
	else
		cout << result2;
}
