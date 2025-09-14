#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows (0-7) for the pattern: ");
    scanf("%d", &rows);

    if (rows < 0 || rows > 7) {
        printf("Invalid input. Please enter a number between 0 and 7.\n");
        return 1;  // Exit with an error code
    }

    for (int i = 0; i <= rows; i++) {
        // Print spaces before the numbers
        for (int j = 0; j < rows - i; j++) {
            printf("  ");
        }

        // Print numbers in decreasing order before and after 0
        for (int j = i; j >= 0; j--) {
            printf("%d ", j);
        }

        // Print a newline character for the next row
        printf("\n");
    }

    return 0;
}
