// 나머지
#include <stdio.h>

int main() {
	int A, B, C;
	int num1, num2, num3, num4;
	scanf("%d %d %d\n", &A, &B, &C);

	num1 = (A + B) % C;
	num2 = ((A % C) + (B % C)) % C;
	num3 = (A * B) % C;
	num4 = ((A % C) * (B % C)) % C;

	printf("%d\n%d\n%d\n%d\n", num1, num2, num3, num4);
	return 0;
}