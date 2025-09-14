#include<stdio.h>

int main()
{
	float Sum,num,a1,d;
	printf("Enter value of number:");
	scanf("%f",&num);
	printf("Enter value of a1:");
	scanf("%f",&a1);
	printf("Enter value of difference:");
	scanf("%f",&d);
	
	Sum =(num/2) *((2*a1) + (num-1)*d);
	
	printf("Sum of series %.2f",Sum);
	
	return 0;
}