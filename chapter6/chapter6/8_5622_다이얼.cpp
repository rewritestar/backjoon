#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int time = 0;
	for (int i = 0; i < str.size(); i++) {
		int idx = str[i] - 'A';
		if (idx < 3) {
			time += 3;
		}
		else if (idx < 6) {
			time += 4;
		}
		else if (idx < 9) {
			time += 5;
		}
		else if (idx <12) {
			time += 6;
		}
		else if (idx < 15) {
			time += 7;
		}
		else if (idx < 19) {
			time += 8;
		}
		else if (idx < 22) {
			time += 9;
		}
		else {
			time += 10;
		}
	}
	cout << time;
}