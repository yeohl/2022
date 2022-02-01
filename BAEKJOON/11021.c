#include <stdio.h>

int main() {
	int a, b, num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		scanf("%d %d\n", &a, &b);

		printf("Case #%d: %d\n", i, a + b);
	}
	return 0;

}