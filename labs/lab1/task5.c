#include <stdio.h>

int main() {
	FILE *file;
	char filename[8];
	fgets(filename, 8, stdin);

	file = fopen(filename, "r");
	int c;
	while ((c = fgetc(file)) != EOF) {
		putchar(c);
	}
	getchar();
	fclose(file);
}
