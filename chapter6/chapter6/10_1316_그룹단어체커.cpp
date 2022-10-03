#include <iostream>
#include <string>
using namespace std;

int main() {
	int count;
	cin >> count;

	int groupcount = 0;

	for (int j = 0; j < count; j++) {
		int alpa[26] = { 0 };
		int isGroup = 1;
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			alpa[str[i] - 'a']++;
			while (str[i + 1] == str[i]) {
				i++;
			}
		}
		for (int i = 0; i < 26; i++) {
			if (alpa[i] > 1)
				isGroup = 0;
		}
		if (isGroup) {
			groupcount++;
		}
	}
	cout << groupcount;
	
}