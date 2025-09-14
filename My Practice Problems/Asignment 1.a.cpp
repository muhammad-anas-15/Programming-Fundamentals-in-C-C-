//Write a program to calculate the program between two points
#include<stdio.h> 
#include<math.h>

int main()
//Declare  variables to store coordinates and distance
{
	float distance,x1,x2,y1,y2,a,b;
//Prompt the user to enter the coordinates of first point 
	printf("ENTER POINT");
	scanf("%f %f",&x1,&y1);
//Prompt the user to enter the coordinates of second point
	printf("ENTER POINT2");
	scanf("%f %f",&x2,&y2);
	a=x2-x1;
	b=y2-y1;
	//Calculate the distance by using distance formula
	distance= sqrt((a*a)+(b*b));
//Display the calculated distance
	printf("Distance is equal to %f",distance);
	return 0;

}

