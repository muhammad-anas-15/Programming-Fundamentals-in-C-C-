#include <stdio.h>

int is_upper(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

int is_lower(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

int is_digit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int is_space(char ch) {
    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r');
}

int main() {
    FILE *file;
    char ch;
    int sentence_count = 0, paragraph_count = 0, char_count = 0, digit_count = 0, upper_count = 0, lower_count = 0;
    int in_word = 0;  // Flag to track if we are inside a word

    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        // Count characters excluding whitespaces
        if (!is_space(ch)) {
            char_count++;
        }

        // Count digits
        if (is_digit(ch)) {
            digit_count++;
        }

        // Count upper-case alphabets
        if (is_upper(ch)) {
            upper_count++;
        }

        // Count lower-case alphabets
        if (is_lower(ch)) {
            lower_count++;
        }

        // Count sentences (assuming every full stop indicates the end of a sentence)
        if (ch == '.') {
            sentence_count++;
        }

        // Count paragraphs (assuming every newline character indicates the end of a paragraph)
        if (ch == '\n') {
            paragraph_count++;
        }

        // Track if we are inside a word
        if (!is_space(ch)) {
            in_word = 1;
        } else {
            // If we encounter whitespace after being in a word, consider it as the end of the word
            if (in_word) {
                in_word = 0;
            }
        }
    }

    fclose(file);

    // Print the results
    printf("a. Number of sentences: %d\n", sentence_count);
    printf("b. Number of paragraphs: %d\n", paragraph_count);
    printf("c. Number of characters (excluding whitespace): %d\n", char_count);
    printf("d. Number of digits: %d\n", digit_count);
    printf("e. Number of upper-case alphabets: %d\n", upper_count);
    printf("f. Number of lower-case alphabets: %d\n", lower_count);

    return 0;
}
