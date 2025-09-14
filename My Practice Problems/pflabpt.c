#include<stdio.h>
 
int factorial(int n);
int power(int n, int x);
 
int main()
{
  int n,x,k ;
  
  printf("Enter value of n:");
  scanf("%d",&n);
  printf("Enter value of x:");
  scanf("%d",&x);
  
   factorial(n);
   power(n,x);
   
  float sum = 0.0;

    for (int k = 0; k <= n; k++) {
        float term = power(x, k) / (float)factorial(k);
        sum += term;
    }

    printf("Sum is %g\n", sum);

    return 0;
}

int factorial(int n)
{
	int fact =1;
	if (n==0)
		{
			return 1;
		}
	for (int i=n; i>=1; i--)
	{
	     fact=fact*i;
	 }
		 
		return fact;
}
int power(int x, int k) {
    float result = 1.0;
    for (int i = 0; i < k; i++) {
        result *= x;
    }
    return result;
}