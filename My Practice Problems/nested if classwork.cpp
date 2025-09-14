#include<stdio.h>
int main()
{
	int a,b,c;
	a= 5;
	b= 10;
	c= 7;
	
	if (a>b)
	{
		if (a>c){
		
		printf("a is greater");
		}
	else
	{
		printf("b is greater");
		}
	}
	else{
		if (b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
}
