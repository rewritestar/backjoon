#include <iostream>
#include <string.h>
using namespace std;

//strlen : string 길이 계산
//sizeof char[]배열은 처음 정해진 길이 반환
//strlen(char[])을 하면 string 주어진 길이만 반환
void reverse(char num[]) {
	int l = strlen(num);
	for (int i = 0; i < l / 2; i++) {
		char temp = num[i];
		num[i] = num[l - i - 1];
		num[l - i - 1] = temp;
	}
}
int main() {
	char num1[10001], num2[10001], res[10002] = { 0 };
	cin >> num1 >> num2;

	//reverse -> 인덱스 0부터 계산하기 쉽게하기 위해
	reverse(num1);
	reverse(num2);
	//strlen이 작은수를 기준으로 덧셈
	int maxl = strlen(num1) > strlen(num2) ? strlen(num1) : strlen(num2);

	int up = 0;
	for (int i = 0; i < maxl; i++) {
		int n1 = num1[i] - '0';
		int n2 = num2[i] - '0';
		int sum = n1 + n2 + up;
		if (sum > 9) {
			res[i] = '0' + n1 + n2 + up - 10;
			up = 1;
		}
		else if (sum < 0) { //자릿수가 다를경우
			cout << "sum: " << sum;
			if (sum + '0' > 9) {
				up = 1;
				res[i] = sum + '0' - 10 + '0';
			}
			else {
				up = 0;
				res[i] = sum + '0' + '0';
			}
		}
		else {
			res[i] = '0' + n1 + n2 + up;
			up = 0;
		}
	}

	////남은 값 순차적 처리
	//int i = minl;
	//if (strlen(num1) > minl) {
	//	for (i = minl; i < strlen(num1); i++) {
	//		int n = num1[i] - '0';
	//		if (n + up > 9) {
	//			res[i] = '0'+ n + up - 10;
	//			up = 1;
	//		}
	//		else {
	//			res[i] = '0' + n+up;
	//			up = 0;
	//		}
	//	}

	//}else if (strlen(num2) > minl) {
	//	for (i = minl; i < strlen(num2); i++) {
	//		int n = num2[i] - '0';
	//		if (n + up > 9) {
	//			res[i] = '0' + n + up - 10;
	//			up = 1;
	//		}
	//		else {
	//			res[i] = '0' + n + up;
	//			up = 0;
	//		}
	//	}
	//}

	if (up) {
		res[maxl] = '0' + 1;
	}
	reverse(res);
	cout << res;
}