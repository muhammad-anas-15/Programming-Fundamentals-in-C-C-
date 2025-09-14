#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a:");
	scanf("%d",&a);
	
		printf("enter value of b:");
	scanf("%d",&b);
		printf("enter value of c:");
	scanf("%d",&c);
	
	if (a>b  && b>c)
	{
		printf("largest value =%d",a);
		
	}
         
 else
 {
 	printf("value =%d",c);
 	return 0;
 }
}
