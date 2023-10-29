#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *file = fopen("task7-1.txt", "a");
	char str[] = "Hello, World!";

	fprintf(file, "%s\n", str);

	fclose(file);

	return 0;
}


