#include<stdio.h>
int value(int x)
{
	int value =(x*x*x);
	return value;
}
int main()
{ 
  int x;
  printf("Enter value of x:");
  scanf("%d",&x);
  
  int result= value(x);
  printf("Value is=%d",result);
  return 0;
}
