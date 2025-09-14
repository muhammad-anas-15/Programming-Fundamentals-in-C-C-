#include<stdio.h>

int main()
{
    int number;
    int unique[10] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 4};
    int count = 0;
    int found = 0; // Variable to track if the number is found

    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = 0; i < 10; i++)
    {
        if (number == unique[i])
        {
            count++;
            found = 1; // Set found to 1 when the number is found
        }
    }

    if (found)
    {
        printf("Number found\n");
        printf("Number of times number repeats: %d", count);
    }
    else
    {
        printf("Number not found\n");
    }

    return 0;
}
