#include<stdio.h>
int main()
{
	int ryam_age,syam_age,aja_age;
  
	
	printf("enter ryam_a");
	scanf("%d",&ryam_age);
	
	printf("enter syam_age");
	scanf("%d",&syam_age);
	
	printf("enter aja_age");
	scanf("%d",&aja_age);
	
	if (ryam_age<syam_age)
	{
		if (ryam_age<aja_age){
		
		printf("ryam is youngest");
		}
	else
	{
		printf("syam is youngest");
		}
	}
	
	else
	{
		if (syam_age<aja_age)
		{
			printf("syam is youngest");
		}
		else
		{
			printf("aja is youngest");
		}
}
}
