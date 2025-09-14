#include<stdio.h>

int main()
{
	int marks[10];
	int max, min,even_count =0,odd_count=0; 
	//float sum=0.0, average =0.0;
	
	for (int i=0;i<10;i++)
	{
		printf("Enter value of marks %d:",i);
		scanf("%d",&marks[i]);
		
	}
	
	       //min = marks[0];
	
	for (int j=0;j<10; j++)
	
	{
	    
	    //if (marks[j]%2 ==0)
	    /*{
	        even_count++;
	        //printf("Even numbers are %d,",marks[j]);
	    }*/
	    //sum  = sum + marks[j];
        //average = sum / 10;
        
        if (marks[j]%2 !=0)
	    {
	        even_count++;
	        //printf("Even numbers are %d,",marks[j]);
	    }
		
		/*if ( marks[j] < min)
		{
			 min = marks[j];
		}*/
		//printf("Even numbers are %d,",even_count);
	}
	//printf("Even numbers are %d,",even_count);
	//printf("odd numbers are %d,",even_count);
	//average = sum / 10.0;
	
	//printf("Average is: %f",average);
	//printf("Sum is: %d",sum);
	return 0;
	
}