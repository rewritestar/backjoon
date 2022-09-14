#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int num1, num2;
    int* arr = new int[100];
    int i = 0;
    //EOF에 대해 알아야 함.
    while (scanf("%d %d", &num1, &num2) != EOF) {
        arr[i++] = num1 + num2;
    }
    for (int j = 0; j < i; j++) {
        printf("%d\n", arr[j]);
    }
    return 0;
}