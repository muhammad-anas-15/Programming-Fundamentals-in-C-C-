#include<stdio.h>
#include<math.h>

int main()
{
	float Sum,num,a1,d,square,result;
	printf("Enter value of number:");
	scanf("%f",&num);
	/*printf("Enter value of a1:");
	scanf("%f",&a1);
	printf("Enter value of difference:");
	scanf("%f",&d);
	
	Sum =(num/2) *((2*a1) + (num-1)*d);
	
	printf("Sum of series %.2f",Sum);*/
	
	if (num <0)
	{
	square = (num * num);
	result = sqrt(square);
	
	printf("Absolute value of %g is %g",num,result);
}
else
{
	printf("Absolute value of %g is %g",num,num);
}
	return 0;
}