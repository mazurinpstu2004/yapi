#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *file = fopen("task8-1.txt", "r");
	char info[100];

	fgets(info, sizeof(info), stdin);

	FILE *temp = fopen("temp.txt", "w");
	fprintf(temp, "%s", info);

	char c;
	while ((c = fgetc(file)) != EOF) {
		fprintf(temp, "%c", c);
	}
	fclose(file);
	fclose(temp);

	remove("task8-1.txt");
	rename("temp.txt", "task8-1.txt");

	return 0;
}
