// 알람 시계
#include <stdio.h>

int main() {
	int H, M;
	scanf("%d %d\n", &H, &M);

	if (M < 45) {
		M += 15;  // M + 60 - 45
		if (H == 0) {
			H = 23;

		}
		else
			H -= 1;
	}
	else
		M -= 45;
	printf("%d %d\n", H, M);
	return 0;

}