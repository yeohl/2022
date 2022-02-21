#include <stdio.h>

int main() {

	int h, m, t, tmp;

	scanf("%d %d\n", &h, &m);
	scanf("%d\n", &t);

	m += t;

	if (m >= 60) {
		tmp = m / 60;
		h += tmp;
		m %= 60;
	}

	if (h >= 24) {
		h %= 24;
	}

	printf("%d %d", h, m);
	return 0;
}