#include <stdio.h>

char letter1(int a, char letter)
{
    letter = letter + a;
    return letter;
}

int main()
{
    char letter = 'a';  // Initialize letter with a character
    int a = 23;
    letter = letter1(a, letter);  // Call the function and store the result in 'letter'

    printf("Value of letter1: %c", letter);  // Print the updated 'letter'
    return 0;
}

