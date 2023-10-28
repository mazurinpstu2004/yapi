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

int main() {
	int n;
	float arg1, arg2;
	printf("Enter n:\n");
	scanf("%d", &n);

	printf("Enter arg1:\n");
	scanf("%f", &arg1);

        printf("Enter arg2:\n");
        scanf("%f", &arg2);

	float mas[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		mas[i] = (float)rand() / RAND_MAX * (arg2 - arg1) + arg1;
		printf("%.1f ", mas[i]);
	}
	printf("\n");
	ArraySort(mas, n);
	for (int i = 0; i < n; i++) {
		printf("%.1f ", mas[i]);
	}

	return 0;
}
