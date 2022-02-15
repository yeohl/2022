#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d\n", &n);
	int a;
	char arr[21];

	for (int i = 0; i < n; i++) {
		scanf("%d ", &a);
		scanf("%s\n", arr);
		for (int j = 0; j < strlen(arr); j++) {
			for (int k = 0; k < a; k++) {
				printf("%c", arr[j]);
			}
			
		}
		printf("\n");
	}
	return 0;
}