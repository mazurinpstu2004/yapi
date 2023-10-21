#include <stdio.h>

int main() {
	FILE *input_file, *output_file;
	char input_filename[] = "task6-2.txt";
	char output_filename[] = "task6-output.txt";
	char buffer[100];

	input_file = fopen(input_filename, "r");
	output_file = fopen(output_filename, "w");

	for (int i = 0; i < 3; i++) {
		if (fgets(buffer, sizeof(buffer), input_file) != NULL) {
			fputs(buffer, output_file);
		} else {
			break;
		}
	}
	fclose(input_file);
	fclose(output_file);

	return 0;
}
