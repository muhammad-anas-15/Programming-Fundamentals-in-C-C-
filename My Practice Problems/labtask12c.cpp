#include<stdio.h>
int main()
{
	int array[25];
	int temp;
	
	
	for (int i=0; i<25 ;i++)
	{
		printf("Enter number between (10-100) :");
		scanf("%d",&array[i]);
	}
	temp = array[0];
	
	for (int j=0 ;j<25; j++)
	{
		if (array[0] == temp)
		{
			printf("Number is duplicate enter again");
		}
		else
		{
			("%d",&array[j]);
		}
	}
}