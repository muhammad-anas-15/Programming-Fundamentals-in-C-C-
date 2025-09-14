#include <stdio.h>

int sub(int a, int b) {
    int result = a - b;
    return result;
}

int main() {
    int x = 4, y = 7;
    int subtractionResult = sub(x, y);
    printf("Value of sub is %d", subtractionResult);
    return 0;
}

