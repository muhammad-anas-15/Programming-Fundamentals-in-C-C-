#include<stdio.h>
#include<math.h>
int main()
{
	int quadratic_formula,a,b,c;
	
     	printf("Enter value of a");
	scanf("%d",&a);
	
		printf("Enter value of b");
	scanf("%d",&b);
	
	 printf("Enter value of c");
	scanf("%d",&c);
	
	quadratic_formula = -(b)*sqrt((b*b)-(4*a*c) /(2*a));
	
	printf("Value of x is =%d",quadratic_formula);
	return 0;

}
