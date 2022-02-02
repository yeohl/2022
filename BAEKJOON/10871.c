// X보다 작은 수

#include <stdio.h>

int main() {
	int n, x, tmp;
	scanf("%d %d\n", &n, &x);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &tmp);

		if (tmp < x)
			printf("%d ", tmp);
	}
	return 0;
}