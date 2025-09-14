#include <stdio.h>

void initializeArray(int array[], int size);
int findMinimum(int array[], int size);
int findMaximum(int array[], int size);
int displayLastElement(int array[], int size);
int displayValueAtIndex2(int array[]);
void countEvenOddElements(int array[], int size, int *evenCount, int *oddCount);
void printReverseOrder(int array[], int size);
double findAverage(int array[], int size);

int main()
{
    int myArray[10];

    initializeArray(myArray, 10);

    printf("1. Minimum value: %d\n", findMinimum(myArray, 10));

    printf("2. Maximum value: %d\n", findMaximum(myArray, 10));

    printf("4. Last element: %d\n", displayLastElement(myArray, 10));

    printf("5. Value at index 2: %d\n", displayValueAtIndex2(myArray));

    int evenCount = 0, oddCount = 0;

    countEvenOddElements(myArray, 10, &evenCount, &oddCount);

    printf("6. Even elements: %d, Odd elements: %d\n", evenCount, oddCount);

    printReverseOrder(myArray, 10);

    printf("3. Average value: %.2f\n", findAverage(myArray, 10));

    return 0;
}

void initializeArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &array[i]);
    }
}

int findMinimum(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; ++i)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int findMaximum(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; ++i)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int displayLastElement(int array[], int size)
{
    return array[size - 1];
}

int displayValueAtIndex2(int array[])
{
    return array[2];
}

void countEvenOddElements(int array[], int size, int *evenCount, int *oddCount)
{
    for (int i = 0; i < size; ++i)
    {
        if (array[i] % 2 == 0)
        {
            (*evenCount)++;
        }
        else
        {
            (*oddCount)++;
        }
    }
}

void printReverseOrder(int array[], int size)
{
    printf("Numbers in reverse order: ");
    for (int i = size - 1; i >= 0; --i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

double findAverage(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += array[i];
    }
    return (double)sum / size;
}
