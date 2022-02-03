#include <stdio.h>

int main() {
	int arr[9] = { 0 };
	int num;
    int max = arr[0];
    
	for (int i = 1; i <= 9; i++) {
		scanf("%d\n", &arr[i]);

		if (arr[i] > max) {
			max = arr[i];
			num = i;
		}
    }
	printf("%d\n%d", max, num);

	return 0;
}