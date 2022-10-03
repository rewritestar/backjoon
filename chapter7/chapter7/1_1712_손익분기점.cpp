#include<iostream>
using namespace std;

//중요한 점
//무조건 반복문 쓰지 않기
//수학적으로 효율적인 계산 먼저 생각하기
int main() {
	long long num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	int i = 0;
	int gap = num3 - num2;
	if (gap <= 0) {
		cout << -1;
		return 0;
	}
	int num = num1 / gap;
	cout << num+1;
}