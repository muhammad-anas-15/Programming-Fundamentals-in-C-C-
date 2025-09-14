#include <stdio.h>

void celsiusToFahrenheit(float celsius, float *fahrenheit) {
    *fahrenheit = (celsius * 9/5) + 32;
}

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Call the function to convert Celsius to Fahrenheit
    celsiusToFahrenheit(celsius, &fahrenheit);

    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

