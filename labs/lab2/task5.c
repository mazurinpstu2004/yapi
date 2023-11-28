#include <stdio.h>
#include <stdlib.h>

struct Product {
	char name[100];
	int price;
};

void ProductSort(struct Product prod[], int k) {
        for (int i = 0; i < k - 1; i++) {
                for (int j = k - 1; j > i; j--) {
                        if (prod[j - 1].price > prod[j].price) {
                                struct Product t = prod[j-1];
                                prod[j-1] = prod[j];
                                prod[j] = t;
                        }
                }
        }
}


int main() {
	FILE *input_file, *output_file;
	input_file = fopen("task5.txt", "r");
	output_file = fopen("task5_output", "w");

	struct Product prod[100];
	int cnt = 0;

	while (fscanf(input_file, "%s %d", prod[cnt].name, &prod[cnt].price) != EOF) {
		cnt++;
	}

	ProductSort(prod, cnt);

	for (int i = 0; i < cnt; i++) {
		fprintf(output_file, "%s %d\n", prod[i].name, prod[i].price);
	}

	fclose(input_file);
	fclose(output_file);

	return 0;
}
