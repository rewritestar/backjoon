#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;

	//�߿��� ��
	//���� �� �� �������� �ʴ� ���, �ݿø��� �ʿ���
	//cout�� ū���� ��� eǥ�⸦ �ϹǷ�, printf�� �ٲ�
	double result = (V - B) / (double)(A - B);

	printf("%0.f", ceil(result));
}