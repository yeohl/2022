#include <stdio.h>

int main() {
	int arra[10] = { 0 };
	int arrb[42] = { 0 };
	int count = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d\n", &arra[i]);
		arra[i] %= 42;
	}
	for (int i = 0; i < 10; i++) {
		arrb[arra[i]]++;

		if (arrb[arra[i]] == 2)
			arrb[arra[i]]--;
	}
	for (int i = 0; i < 42; i++) {
		count += arrb[i];
	}
	printf("%d", count);

	return 0;


}