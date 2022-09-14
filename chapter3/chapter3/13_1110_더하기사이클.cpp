#include <stdio.h>
#pragma warning(disable:4996)


int main() {
    int origin;
    int cycle = 0;
    scanf("%d", &origin);
    int result = origin;
    while (origin != result || cycle == 0) {
        int ten = result / 10;
        int one = result % 10;
        int sum = ten + one;
        int sumTen = sum / 10;
        int sumOne = sum % 10;
        result = one * 10 + sumOne;
        cycle++;
    }
    printf("%d", cycle);
    return 0;
}