#include<stdio.h>
int main()
{
	int total_cost,no_of_days,no_of_miles;
	
	printf("Enter value of no of days");
	scanf("%d",&no_of_days);
	
	printf("Enter value of no of miles");
	scanf("%d",&no_of_miles);
	
	total_cost =(no_of_days * 25)+(no_of_miles *0.15);
	
	if (no_of_days > 30)
	{
		 total_cost =total_cost + 0.2;
		 printf("total price with discount =%d",total_cost);
	}
	else
	{
		total_cost = (no_of_days * 26.99)+(no_of_miles *0.15);
		printf("Additional amount is added =%d",total_cost);
	}
	
}
