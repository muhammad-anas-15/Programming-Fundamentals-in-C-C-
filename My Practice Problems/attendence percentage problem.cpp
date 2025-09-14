#include<stdio.h>
int main()
{
	int attendence,total_classes,attended_classes;
	
	printf("Enter total classes");
	scanf("%d",&total_classes);
	
	printf("Enter value of attended_classes");
	scanf("%d",&attended_classes);
	
	attendence = ((attended_classes *100) /total_classes );
	
	if (attendence <80)
	{
		printf("Not allowed to sit in exam");
		
	}
	 else
	 {
	 	printf("Allowed to sit in exam");
	 }
	 
	return 0;
	
}
