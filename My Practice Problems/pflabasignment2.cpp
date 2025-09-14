#include<stdio.h>

float Pi_value(int terms);

int main()
{
	int terms;
	
	printf("Enter number of terms:");
	scanf("%d",&terms);
	
	Pi_value(terms);
	printf("Approximate value of pi is %f",Pi_value(terms));
	
	return 0;
}
float Pi_value(int terms)
{
	float pi = 3.0;
	float sign =1.0;
	
	for (int i=1; i<terms; i++)
	{
		pi += sign * 4.0 / ((2 * i) * (2 * i + 1) * (2 * i + 2));
        sign *= -1.0;
	}
	return pi;
}