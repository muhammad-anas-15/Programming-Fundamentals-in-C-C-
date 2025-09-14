#include<stdio.h>
int main()
{
 float year,month,i;
 
 printf("Enter value in integer");
 scanf("%f",&i);
 
 year=i/365;
 month=i/30; 
 
 printf("\nEnter value of year %f",year);
 printf("\nEnter value of month %f",month);
 
 return 0;
 	
}
