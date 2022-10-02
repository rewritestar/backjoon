#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int alpa[26] = { 0 };
	for (int i = 0; i < str.size(); i++) {
		//대문자의 경우
		if (str[i] - 'a' < 0) {
			alpa[str[i] - 'A'] ++;
		}
		//소문자의 경우
		else {
			alpa[str[i] - 'a'] ++;
		}
	}
	int max = 0;
	int same = 0;
	int maxIdx = 0;
	for (int i = 0; i < 26; i++) {

		if (alpa[i] > max)
		{
			max = alpa[i];
			same = 0;
			maxIdx = i;
		}else if (alpa[i] == max)
			same = 1;
			

	}

	if (same)
		cout << '?';
	else
		printf("%c", 'A' + maxIdx);
}