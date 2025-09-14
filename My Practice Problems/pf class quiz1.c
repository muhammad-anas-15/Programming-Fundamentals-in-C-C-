#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, n, addition, area, square_root;
    const float pi = 3.14;

    printf("Press 1 for Addition\n");
    printf("Press 2 for Area of circle\n");
    printf("Press 3 for square root\n");
    printf("Press 4 to Exit\n");
    printf("Enter your choice: ");
    scanf("%f", &n);

    if (n == 1)
    {
        printf("Enter value of a: ");
        scanf("%f", &a);
        printf("Enter value of b: ");
        scanf("%f", &b);
        addition = a + b;
        printf("Addition of two numbers is %f\n", addition);
    }
    else if (n == 2)
    {
        printf("Enter the radius of the circle: ");
        scanf("%f", &a); // Assuming 'a' is the radius
        area = pi * (a * a);
        printf("Area of the circle is %f\n", area);
    }
    else if (n == 3)
    {
        printf("Enter value of a: ");
        scanf("%f", &a);
        square_root = sqrt(a);
        printf("Square root of a is %f\n", square_root);
    }
    else if (n == 4)
    {
        printf("Exiting the program.\n");
    }
    else
    {
        printf("Invalid choice. Exiting the program.\n");
    }

    return 0;
}

