#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	//1.���̽� ��ü �� �Է¹ް�
	//2. �л��� ���� �Է¹޴� int�� �迭 ���� ����
	//3. ���������� ��������, ��ü�л��� ����
	//4. �л� ��� ���ϰ�, ��� �Ѵ� �л� �� /��ü�л��� 
	//5. 4�� ���� ��. double�� �����迭�� ���� ����
	int caseCount;
	scanf("%d", &caseCount);
	double* overArr = new double[caseCount];
	int studentCount;
	for (int i = 0; i < caseCount; i++) {
		scanf("%d", &studentCount);
		int* studentArr = new int[studentCount];
		int sum = 0, overStudent = 0;
		for (int j = 0; j < studentCount; j++) {
			scanf("%d", studentArr + j);
			sum += studentArr[j];
		}
		double avg = (double)sum / studentCount;
		for (int j = 0; j < studentCount; j++) {
			if (studentArr[j] > avg) {
				overStudent++;
			}
		}
		overArr[i] = (double)overStudent/studentCount * 100;

	}
	
	for (int i = 0; i < caseCount; i++) {
		printf("%0.3f%\n", overArr[i]);
	}
	return 0;
}