#include<stdio.h>
int main()
{
	int n;
	
	printf("enter n");
	scanf("%d",&n);
	
	if (n>99 && n<999)
	{
	printf("the no is 3 digit");
    }
    else 
    {
    	printf("the no is not 3 digit");
	}
	return 0;
}
