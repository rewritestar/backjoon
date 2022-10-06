#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;

	//중요한 점
	//나눌 때 딱 떨어지지 않는 경우, 반올림이 필요함
	//cout은 큰수의 경우 e표기를 하므로, printf로 바꿈
	double result = (V - B) / (double)(A - B);

	printf("%0.f", ceil(result));
}