#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	int allcount;
	cin >> allcount;
	int* count = new int[allcount];
	string* str = new string[allcount];

	for (int i = 0; i < allcount; i++) {
		cin >> count[i];
		cin >> str[i];
	}
	for (int i = 0; i < allcount; i++) {
		for (int j = 0; j < str[i].size(); j++)
		{
			for (int k = 0; k < count[i]; k++)
				cout << str[i][j];
		}
		cout << "\n";
	}
}