#include<stdio.h>
int arithmetic_sum(int n, int a1, int d);

int main()
{
	int n,sum,a1,d;
	
    a1 =2;
	d= 2;
	n= 10;
	
    arithmetic_sum(n,a1,d);
	
	printf("value =%d",arithmetic_sum(n,a1,d));
	
	return 0;
}
int arithmetic_sum(int n, int a1, int d)
{
	int sum;
	sum = n/2 *(2*a1  +(n-1)*d);
	return sum;
}
 
