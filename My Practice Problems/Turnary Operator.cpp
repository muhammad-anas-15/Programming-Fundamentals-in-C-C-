#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter value of a");
	scanf("%d",&a);
	
	a>=18 ? printf("Adult\n") : printf("under age \n");
	return 0;
}
