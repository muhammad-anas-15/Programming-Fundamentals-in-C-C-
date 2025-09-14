#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main() {
    int a, b;
    
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    int result_sum = sum(a, b);
    int result_sub = sub(a, b);
    int result_mul = mul(a, b);

    printf("Sum: %d\n", result_sum);
    printf("Subtraction: %d\n", result_sub);
    printf("Multiplication: %d\n", result_mul);

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

