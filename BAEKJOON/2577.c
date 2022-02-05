#include <stdio.h>
#include <string.h>

int main() {
	int A, B, C, count = 0;
	int sum = 0;
	int tmp[10] = {0};
	char str[100];

	scanf("%d\n%d\n%d", &A, &B, &C);

	sum = A * B * C;

	sprintf(str, "%d", sum);


	for (int i = 0; i < strlen(str); i++) {
		switch (str[i]) {
		case '0':
			tmp[0]++;
			break;
		case '1':
			tmp[1]++;
			break;
		case '2':
			tmp[2]++;
			break;
		case '3':
			tmp[3]++;
			break;
		case '4':
			tmp[4]++;
			break;
		case '5':
			tmp[5]++;
			break;
		case '6':
			tmp[6]++;
			break;
		case '7':
			tmp[7]++;
			break;
		case '8':
			tmp[8]++;
			break;
		default:
			tmp[9]++;
		}
	}
	for (int i = 0; i <= 9; i++)
		printf("%d\n", tmp[i]);

	return 0;
}