#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int countAll, priceAll, price, count;
	int result =0;
	scanf("%d", &priceAll);
	scanf("%d", &countAll);
	for (int i = 0; i < countAll; i++) {
		scanf("%d %d", &price, &count);
		result += (price * count);
	}
	result == priceAll && printf("Yes\n");
	result != priceAll && printf("No\n");
	
	return 0;
}