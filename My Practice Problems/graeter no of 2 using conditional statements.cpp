#include<stdio.h>

int main()
{
	int num1,num2,num3;
	
	printf("Enter value of num1:");
	scanf("%d",&num1);
		printf("Enter value of num2:");
	scanf("%d",&num2);
		printf("Enter value of num3:");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3 )
	{
		printf("largest no of them %d",num1);
	}
	else
	{
		printf("largest no of them %d",num2);
	}
	
}
