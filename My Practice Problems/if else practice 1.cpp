#include<stdio.h>
int main()
{
	int length,breadth;
	
	printf("Enter value of length");
	scanf("%d",&length);
	
	printf("Enter value of breadth");
	scanf("%d",&breadth);
	
	int area = length * breadth;
	
	int perimeter = 2 *(length + breadth);
	
	if (area > perimeter)
	{
		printf("area is greater");
	}
	
	
	if (area < perimeter)
	{
		printf("area is less");
	}
	
	
	if (area == perimeter)
	{
		printf("area is equal to perimeter");
	}
	return 0;
}
