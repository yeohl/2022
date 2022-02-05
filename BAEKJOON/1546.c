#include <stdio.h>

int main() {
	int N;
	double M, aver = 0;
	scanf("%d\n", &N);
	

	double* tmp = (double*)malloc(sizeof(double) * N);

	for (int i = 0; i < N; i++)
		scanf("%lf ", &tmp[i]);	


	M = tmp[0];
	for (int i = 0; i < N; i++) {
		if (tmp[i] > M)
			M = tmp[i]; 
	}

	double sum = 0;

	for (int i = 0; i < N; i++) {	
		sum += (tmp[i] / M) * 100;
		aver = sum / N;
	}
	printf("%lf", aver);

	return 0;
}
