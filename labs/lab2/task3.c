#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n;
	scanf("%d", &n);
	float mas[n];

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		mas[i] = 0.01 * (rand() % 101);
		printf("%.2f ", mas[i]);
	}
	return 0;
}
