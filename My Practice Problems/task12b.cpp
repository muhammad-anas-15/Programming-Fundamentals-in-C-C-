#include <stdio.h>

void findElementAndCount(int array[], int size, int searchElement);

int main() {
    int myArray[10] = {2, 4, 6, 2, 8, 2, 10, 12, 2, 14};
    int searchElement;

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    findElementAndCount(myArray, 10, searchElement);

    return 0;
}

void findElementAndCount(int array[], int size, int searchElement) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] == searchElement) {
            count++;
        }
    }

    if (count > 0) {
        printf("Element %d found %d times in the array.\n", searchElement, count);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }
}

