#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	string cro[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	string str;
	cin >> str;
	int idx;

	for (int i = 0; i < 8; i++) {
		while (1) {
			idx = str.find(cro[i]);
			if (idx == string::npos)
				break;
			str.replace(idx, cro[i].length(), "*");
		}
	}
	
	/*cout << str.length();

	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'c') {
			i++;
			if (str[i] == '=' || str[i] == '-') {
				count++;
				continue;
			}
			i--;
		}
		else if (str[i] == 'd') {
			i++;
			if (str[i] == 'z') {
				i++;
				if (str[i] == '=') {
					count++;
					continue;
				}
				i--;
			}
			if (str[i] == '-') {
				count++;
				continue;
			}
			i--;
		}
		else if (str[i] == 'l' || str[i] == 'n') {
			i++;
			if (str[i] == 'j') {
				count++;
				continue;
			}
			i--;
		}
		else if (str[i] == 's' || str[i] == 'z') {
			i++;
			if (str[i] == '=') {
				count++;
				continue;
			}
			i--;
		}
		
		count++;
	}

	cout << count;*/
}
