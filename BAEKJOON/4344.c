#include <stdio.h>

int main() {

	int t, n;
	
	scanf("%d\n", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		int score[1000];
		int sum = 0;
		double aver;

		for (int j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		aver = (double)sum / n;

		int count = 0;
		for (int k = 0; k < n; k++) {
			if (score[k] > aver)
				count++;
		}
		printf("%.3lf%%\n", (double)count * 100 / n);
		
	}
	return 0;
}