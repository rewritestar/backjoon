#include <iostream>
using namespace std;

/*핵심규칙
-주어진 n번이 몇번째 대각선인가는 1,2,3...순으로 값을 빼다보면 나옴
-예를 들어 8번은 -1,-2,-3을 통해 4번째 대각선에 있음을 알 수 있고,
-그리고 빼기를 통해 남은 값인 2가 대각선에서의 몇번째인지 idx라는 것을 알 수 있음.
-그리고 대각선이 홀수인지 짝수인지에 따라 a/b 가 될것인지 b/a가 될 것인지 나뉨.
-8번은 4번째 대각선에서 시작에서 2번째 위치에 있으며, 4는 짝수이므로 2/4-2+1 의 식으로 2/3을 도출할 수 있음.
*/
int main() {
	int nth;
	cin >> nth;
	int i = 1;
	while ((1 + i) * i / 2 < nth)
		i++;
	int max = (1 + i) * i / 2;
	int min = (1 + i) * i / 2 - i + 1;

	int c, p;

	//i가 짝수
	if (i % 2 == 0) {
		c = nth - min + 1;
		p = max - nth + 1;
	}
	else {
		p = nth - min + 1;
		c = max - nth + 1;
	}
	cout << c << "/" << p;
}