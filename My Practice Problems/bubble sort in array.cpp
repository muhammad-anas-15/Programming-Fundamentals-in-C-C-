#include<stdio.h>
int main()
{
	int elements[5];
	int temp=0;
	
	for (int i=0 ;i<5;i++)
	{
		printf("Enter element no %d:",i);
		scanf("%d",&elements[i]);
	}
 
     for (int i=0; i<5-1 ;i++)
     {
	 
		for (int j =i+1 ;j<5-1;j++)
		{
			if (elements[j]>elements[j+1])
			{
				temp =elements[j];
				elements[i]=elements[j+1];
				elements[j+1] =temp ;
			}
		}
		}
	printf("Elements in Ascending order:");
	for (int i=0 ; i<5 ;i++)
	{
		printf("%d,",elements[i]);
	}
	
	return 0;
}