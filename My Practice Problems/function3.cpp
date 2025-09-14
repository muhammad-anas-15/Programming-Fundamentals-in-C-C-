#include<stdio.h>
#include<math.h>


int square(int a)
{
return a*a;
}

int cube(int a)
{
return a*a*a;
}
 

 int main()
 {
   int a= 87;
 	
 	int result1 = square (a);
 	int result2 = cube (a);
 	
 	printf("square of no is %d\n",result1);
	 printf("cube of no is %d\n",result2);
 	return 0;
 }
