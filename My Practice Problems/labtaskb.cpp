#include<stdio.h>

int minimum_value(int marks[]);
int maximum_value(int marks[]);
int average_value(int marks[]);
int odd_element(int marks[]);
int even_element(int marks[]);
int reverse_order(int marks[]);
int main()
{
	int marks[10];
	
	for (int i=0; i<10; i++)
	{
		printf("Enter marks of %d :",i);
		scanf("%d",&marks[i]);
	}
	
	minimum_value(marks);
	maximum_value(marks);
	average_value(marks);
	printf("Value at index 2 %d\n",marks[2]);
	printf("Last element of array %d\n",marks[9]);
	odd_element(marks);
	even_element(marks);
	reverse_order(marks);
}

int minimum_value(int marks[])
{
	int min=0;
     
	min = marks[0]; 
	
	for (int j=1; j<10; j++)
	{
	
	if ( marks[j] < min )
	{
		min =marks[j];
		
	}

}
	printf("Minimum number is %d\n",min);
}
int maximum_value(int marks[])
{
	int max=0;
     
	max = marks[0]; 
	
	for (int j=1; j<10; j++)
	{
	
	if ( marks[j] > max )
	{
		max =marks[j];
		
	}

}
	printf("Minimum number is %d\n",max);
}
int average_value(int marks[])
{
	float average=0, sum=0;
	
	for (int k=1 ;k<10 ;k++)
	{
		sum +=marks[k];
		
	}
	average = sum /10.0;
	printf("Average of marks is %f\n",average);
}
int odd_element(int marks[])
{
	int count=0;
	
	for (int k=0; k<10; k++)
	{
		if (marks[k] %2 !=0)
		{
			count++;
		}
	}
	printf("Count of odd elements is %d\n",count);
}
int even_element(int marks[])
{
	int count=0;
	
	for (int k=0; k<10; k++)
	{
		if (marks[k] %2 ==0)
		{
			count++;
		}
	}
	printf("Count of even elements is %d\n",count);


}
int reverse_order(int marks[])
{
	for (int k=9 ;k>=0 ;k--)
	{
		printf("%d,",marks[k]);
	}
}