#include<stdio.h>

void square(int a);
void cube(int a);

int main()
{
	int a=6;
	square(a);
	cube(a);
	
	
	printf("value of square of a is =%d",square);
	printf("value of cube of a is =%d",cube);
	
	return 0;
	}
	void square(int a){
	
	int square;
 
	 square =a*a ;
	 	printf("value of square of a is =%d",square);
	}
	void cube(int a)
	{
		
		 int cube;
		 cube =a*a*a;
		 
		printf("value of cube of a is =%d",cube);
	}
