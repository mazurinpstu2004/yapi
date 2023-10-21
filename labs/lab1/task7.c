#include <stdio.h>

int main() {
	FILE *file = fopen("task7-1.txt", "a");
	char str[100];

	fgets(str, sizeof(str), stdin);
	fputs(str, file);

	fclose(file);

	return 0;
}


