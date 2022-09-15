#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	//1.케이스 전체 수 입력받고
	//2. 학생별 점수 입력받는 int형 배열 동적 생성
	//3. 지역변수로 점수총합, 전체학생수 저장
	//4. 학생 평균 구하고, 평균 넘는 학생 수 /전체학생수 
	//5. 4번 연산 값. double형 동적배열에 비율 저장
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