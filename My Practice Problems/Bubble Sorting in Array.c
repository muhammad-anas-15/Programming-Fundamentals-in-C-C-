#include<stdio.h>

int main()
{
	int array[5]={5,8,2,1,9};
	int temp;
	
	for (int i=0 ;i<5;i++)
	{
		for(int j=1;j<4;j++)
		{
			if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
		  
		}
	}
	for (int i=0 ;i<5;i++)
	{
		printf("%d,",array[i]);
	}
 
}