#include<stdio.h> 
#include<math.h>

int main()
{
	float distance,x1,x2,y1,y2,a,b;
	printf("ENTER POINT");
	scanf("%f %f",&x1,&y1);
	printf("ENTER POINT2");
	scanf("%f %f",&x2,&y2);
	
	a=x2-x1;
	b=y2-y1;
	
	distance= sqrt((a*a)+(b*b));
	printf("Distance is equal to %f",distance);
	return 0;

}
