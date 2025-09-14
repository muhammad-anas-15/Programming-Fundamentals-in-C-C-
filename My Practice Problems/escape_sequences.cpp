#include <stdio.h>

int main() 
{
    // Basic escape sequences         
    printf("Hello, World!\n");  //Hello, World                                 
    printf("This is a new line.\tThis is a tab character.\n");  // This is a new line.     This is a tab character 

    // Special characters
    printf("Backspace:\bThis will delete the character before it.\n");  //This will delete the character before it.
    printf("Carriage return:\rThis will move the cursor to the beginning of the line.\n"); //Carriage return
                                                                                           //This will move the cursir to the beginning of new line
    // Double quotes and backslash
    printf("Double quotes: \"This is inside double quotes\"\n");
    printf("Backslash: \\This is a \v backslash\n"); //Backslash: \This is a backslash

    // Octal and hexadecimal escape sequences
    printf("Octal value: \127\n");
    printf("Hexadecimal value: \x2A\n");

    // Alert (bell) sound
    printf("Alert sound: \a\n"); // sound

    return 0;
}