#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArraySort(float *arr, int k) {
	for (int i = 0; i < k - 1; i++) {
		for (int j = k - 1; j > i; j--) {
			if (arr[j - 1] > arr[j]) {
				float t = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = t;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	float arg1 = atof(argv[2]);
	float arg2 = atof(argv[3]);

	float mas[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		mas[i] = (float)rand() / RAND_MAX * (arg2 - arg1) + arg1;
		printf("%.1f ", mas[i]);
	}
	FILE *file = fopen("task4-output", "w");
	ArraySort(mas, n);
	for (int i = 0; i < n; i++) {
		fprintf(file, "%.1f ", mas[i]);
	}
	return 0;
}
