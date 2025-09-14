#include<stdio.h>
int area_of_circle(int r);
int area_of_triangle(int a, int b);
int main()
{
	int a,b,r;
	
	const float pi =3.14;
	
	printf("Enter value of a");
	scanf("%d",&a);
	
	printf("Enter value of b");
	scanf("%d",&b);
	
	printf("Enter value of r");
	scanf("%d",&r);
	
	float areaC  =area_of_circle(r);
	float areaT =area_of_triangle(a, b);
	
	 area_of_circle(r);
	 area_of_triangle(a, b);
	
	printf("quotient =%f\n",areaC);
	printf("remainder =%f\n",areaT);
	
	return 0;
}
  int area_of_circle(int r)
 {
 	return 3.14*(r*r);
 }
  int area_of_triangle(int a, int b)
  {
  	return 0.5*(a*b);
  }
