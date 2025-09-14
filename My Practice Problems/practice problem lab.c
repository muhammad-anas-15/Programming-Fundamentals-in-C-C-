#include<stdio.h>
int main()
{
	int sum,a1,n,d;
	
	printf("Enter value of first term a1:");
	scanf("%d",&a1);
	printf("Enter value of number of terms n:");
	scanf("%d",&n);
	printf("Enter value of difference d:");
	scanf("%d",&d);
	
	sum = (n/2) * ((2*a1) + (n-1)*d);
	
	printf("Sum is %d",sum);
	return 0;
}
