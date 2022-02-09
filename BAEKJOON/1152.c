#include <stdio.h>
#include <string.h>

int main() {
	int count = 1;
	int i = 0;
	char arr[1000000];

	gets(arr);

	for (i = 0; i < strlen(arr); i++) {
		if (arr[i] == ' ') {
			count++;
		}
	}
	if (arr[0] == ' ')
		count--;
	if (arr[i-1] == ' ')
		count--;

	printf("%d", count);
	return 0;
}
