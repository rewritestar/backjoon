#include<iostream>
using namespace std;

//�߿��� ��
//������ �ݺ��� ���� �ʱ�
//���������� ȿ������ ��� ���� �����ϱ�
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