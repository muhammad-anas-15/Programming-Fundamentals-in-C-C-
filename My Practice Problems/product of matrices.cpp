#include<stdio.h>
int main()
{
	int arr1[2][3]={2,3,4,5,6,7};
	int arr2[3][2]={1,2,4,9,8,7};
	int arr3[2][2];
	
	
	for (int i=0; i<2;i++)
	for (int j=0; j<2; j++)
	{
		int sum =0;
		for (int k=0 ;k<2; k++)
		{
			 sum += arr1[i][k] + arr1[k][j];
		}
		arr3[2][2] =  sum;
	}
	for (int i=0; i<2; i++)
	{
		 
		for (int j=0 ;j<2; j++)
		{
			  printf("%d ",arr3[i][j]);
		}
		printf("\n");
		 
	}
	
}