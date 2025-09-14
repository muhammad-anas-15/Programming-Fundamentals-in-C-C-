#include<stdio.h>
#include<math.h>

 int main ()
{
	printf("Press 1 for Addition");
	printf("Press 2 for Area of circle");
	printf("Press 3 for square root ");
	printf("Press 4 for Addition");
	printf("Press 5 for Menu");
	
	float a,b,n,addition,area,square_root;
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);
	
	const float pi =3.14;
	
	if (n==4){
		
		printf("system should exit");
	}
	
	
	if (n==1){
		float addition;
		addition = a+b;
		printf("Addition of 2 no is %f",addition);
	}
	if (n==2)
	{
		float area;
		area = pi* (r*r);
		printf("Area is =%f",area);
		
	}
	if (n==3)
	{
		float sqaure_root;
		square_root = sqrt *(a+b);
		printf("squre_root of addition =%f",square_root);
		
	}
	if (n==5){
		
	printf("Press 1 for Addition");
	printf("Press 2 for Area of circle");
	printf("Press 3 for square root ");
	printf("Press 4 for Addition");
		
	}
	else{
		return 0;
	}
}
