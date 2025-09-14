#include<stdio.h>
int square(int a);
int cube(int a);
int main()
{
	int a;
		printf("Enter value of a:");
	scanf("%d",&a);
	
	int s =square(a);
	printf("value of square of a =%d\n",s);
	int c =cube(a);
	printf("value of cube of a =%d\n",c);
	
	return 0;
}
 int square(int a)
 {
 	return a*a;
 }
 int cube(int a)
 {
 	return a*a*a;
 }
