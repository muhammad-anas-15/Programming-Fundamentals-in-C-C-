#include <stdio.h>

#define SIZE 25

int isDuplicate(int array[], int size, int num);

int main() {
    int numbers[SIZE];
    int uniqueNumbers[SIZE];
    int uniqueCount = 0;

    printf("Enter 25 numbers between 10 and 100:\n");

    for (int i = 0; i < SIZE; ++i) {
        int num;

        // Read a number and validate it
        do {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &num);

            // Validate the input
            if (num < 10 || num > 100) {
                printf("Please enter a number between 10 and 100.\n");
            } else if (isDuplicate(numbers, i, num)) {
                printf("Duplicate number! Please enter a unique number.\n");
            } else {
                // Store the unique number in the array
                numbers[i] = num;
                uniqueNumbers[uniqueCount++] = num;
                break;
            }
        } while (1); // Repeat until a valid and unique number is entered
    }

    // Display the unique numbers
    printf("\nUnique numbers entered:\n");
    for (int i = 0; i < uniqueCount; ++i) {
        printf("%d ", uniqueNumbers[i]);
    }
    printf("\n");

    return 0;
}

// Function to check if a number is a duplicate in the array
int isDuplicate(int array[], int size, int num) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == num) {
            return 1; // Duplicate found
        }
    }
    return 0; // No duplicate found
}
