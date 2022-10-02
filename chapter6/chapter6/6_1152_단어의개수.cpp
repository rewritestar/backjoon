#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
using namespace std;

int main() {
	int count = 0;
	string s;
	string str;
	getline(cin, str);
	stringstream stream;
	stream.str(str);
	while (stream >> s)
		count++;
	cout << count;
}