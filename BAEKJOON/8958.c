#include <stdio.h>
#include <string.h>

int main() {
	int T, count = 0, sum = 0;
	char arr[100] = { 0 };

	scanf("%d\n", &T);

	for (int i = 0; i < T; i++) {
		scanf("%s\n", &arr);

		sum = 0;
		count = 0;

		for (int j = 0; j < strlen(arr); j++) {

			if (arr[j] == 'O') {
				count += 1;
				sum += count;
			}
			else if (arr[j] == 'X') 
				count = 0;
			
		}
		printf("%d\n", sum);
	}
	return 0;
}