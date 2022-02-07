#include <stdio.h>

int main() {
	int T;
	int sum = 0;
    char arr[100];

	scanf("%d\n", &T);

	scanf("%s\n", &arr);

	for (int i = 0; i < T; i++) {
		sum += (arr[i] - 48);
	}
	printf("%d", sum);

	
	return 0;
}