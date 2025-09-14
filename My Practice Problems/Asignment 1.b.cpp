#include<stdio.h>

int main()
{
	 float second,h,a,b;
	 
	 printf("\n Enter the value of a:"); 
	 scanf("%f",a); 
	 printf("\n Enter the value of b:");
	 scanf("%f",&b);
	 
	 h=b-a;
	 
	 second=h*3600;
	 
	 printf("Time in second %f",second);
	 
	 return 0;
	 
	
}
