#include <stdio.h>

int main() {

	int num,tmp, a, b, count = 0;

	scanf("%d", &tmp);
	num = tmp;

	while (1) {
		a = tmp / 10;
		b = tmp % 10;
		tmp = b * 10 + (a + b) % 10;
		count++;

		if (num == tmp) 
			break;
	}
	printf("%d\n", count);

	return 0;
}