#include <stdio.h>
#include <string.h>

int main() {

	char s[100];
	int count = 0;
	scanf("%s\n", &s);

	for (int i = 97; i <= 122; i++) {
		count = 0;

		while (s[count] != 0) {
			if (s[count] == i)
				break;

			count++;
		}
		if (s[count] == i) {
			printf("%d ", count);
		}
		else
			printf("-1 ");

	}
	return 0;
}