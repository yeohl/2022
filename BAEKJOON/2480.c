#include <stdio.h>

int main() {

	int a, b, c;
    int sum = 0, tmp = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c && a == c)
		sum = 10000 + a * 1000;
	else if (a == b || a == c)
		sum = 1000 + a * 100;
	else if (b == c)
		sum = 1000 + b * 100;
	else {
		if (a > b && a > c)
			tmp = a;
		else if (b > a && b > c)
			tmp = b;
		else if (c > a && c > b)
			tmp = c;
		sum = tmp * 100;
	}
	printf("%d", sum);
	return 0;
}