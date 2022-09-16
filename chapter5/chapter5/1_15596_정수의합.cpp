#include <stdio.h>
#include <vector>
#pragma warning(disable:4996)

long long sum(std::vector<int>& a) {
	long long result = 0;

	for(auto iter:a) {
		result += iter;
	}
	return result;
}

int main() {
	std::vector<int>a = { 1,2,3,4,5 };
	printf("%lld", sum(a));
}