#include<stdio.h>
int main()
{
	int a;
	printf("Enter value of a:");
	scanf("%d",&a);
	
	if(a >= 18)
	{
		printf("Adult Age\n");
		printf("They can drive\n");
			printf("They can watch porn\n");
				printf("They can fuck\n");
		
	}
	else if(a >13 && a<18)
	{
		printf("Teenager\n");
	}
	else
	{
		printf("Child\n");
	}
	printf("Thank you\n");
 
	
	
}
