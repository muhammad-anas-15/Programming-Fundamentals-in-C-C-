#include <stdio.h>
#include <string.h>

void writeOutput(FILE *outputFile, const char *name, int index) {
    // Subjects
    const char *subjects[] = {"Programming Fundamentals", "Calculus", "English Composition"};

    // Write to the output file
    fprintf(outputFile, "%d %s, %s, %s, %s\n", index, name, subjects[0], subjects[1], subjects[2]);
}

int main() {
    FILE *inputFile = fopen("file12.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        perror("Error opening file");
        return 1;
    }

    char str[100];
    int index = 1;

    // Read names from input file and write to output file
    while (fgets(str, sizeof(str), inputFile) != NULL) {
        // Find the position of the newline character
        size_t len = strcspn(str, "\n");

        // Replace the newline character with null-terminator
        if (len < sizeof(str)) {
        	str[len] = '\0';
        }

        // Write output to file
        writeOutput(outputFile, str, index);
        index++;
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("Output written to 'output.txt'\n");

    return 0;
}
