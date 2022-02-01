// 구구단
#include <stdio.h>

int main() {
	int N;
	scanf("%d\n", &N);

	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", N, i, N * i);
	return 0;
}