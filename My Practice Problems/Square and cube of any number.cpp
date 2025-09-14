#include <stdio.h>
#include <math.h> // Include math.h for pow function

int square(int a) {
    return a * a;
}

int cube(int a) {
    return a * a * a;
}

int main() {
    int a = 4;

    int result1 = square(a);
    int result2 = cube(a);

    printf("Square of %d is %d\n", a, result1);
    printf("Cube of %d is %d\n", a, result2);

    return 0;
}

