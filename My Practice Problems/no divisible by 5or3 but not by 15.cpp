#include<stdio.h>
int main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	
	if ((n%3==0 || n%5==0) && n!=15)
	{
		printf("no is divisible by 3 or 5 but not divisible by 15");
	}
	 else
	{
		printf("the no is not suitable");
	}
	return 0;
}
