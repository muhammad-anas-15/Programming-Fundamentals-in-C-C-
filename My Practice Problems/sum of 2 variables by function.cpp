#include<stdio.h>
int average(int a, int b, int c);
int main()
{
	int a,b,c;
	printf("enter value of a:");
	scanf("%d",&a);
		printf("enter value of b:");
	scanf("%d",&b);
	printf("enter value of c:");
	scanf("%d",&c);
	
	 int result =average(a, b, c);
	printf("value of average =%d",result);
	return 0;
}
int average(int a, int b, int c)
{
	return (a+b+c) /3;
}
