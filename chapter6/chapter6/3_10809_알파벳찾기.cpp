#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int aa[26] = { 0 };
	for (int i = 0; i < str.size(); i++) {
		//cout << str[i]-'a' << " ";
		if(aa[str[i] - 'a'] == 0)
			aa[str[i] - 'a'] = i+1;
	}
	for (int i = 0; i < 26; i++) {
		if (aa[i] == 0)
			cout << -1 << " ";
		else
			cout << aa[i]-1 << " ";
	}

	/*int i = 0;
	string str;
	cin >> str;
	char alpa[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's','t','u', 'v', 'w', 'x', 'y', 'z'};
	int alpaint[] = { -1,-1 ,-1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };

	for (i = 0; i < 26; i++) {
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == alpa[i]) {
				alpaint[i] = j;
				break;
			}
		}
			
	}
	for(i = 0; i < 26; i++)
		cout << alpaint[i] << " ";
	*/
	return 0;
}