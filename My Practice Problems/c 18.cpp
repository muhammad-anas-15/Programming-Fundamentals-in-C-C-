#include<stdio.h>
int sub(int a, int b)
{
   int subtraction = a-b;
   return subtraction;	
	
}
  int main()
  {
  	int a=4, b=7;
  	
  	int subtraction =sub (a,b);
  	
  	printf("Value of sub is %d",subtraction);
  }
