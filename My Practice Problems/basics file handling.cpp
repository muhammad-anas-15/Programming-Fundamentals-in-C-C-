#include<stdio.h>

int main()
{
	FILE *ptr;
	ptr =fopen("fprintf.txt","w");
	
	int roll_no,marks,choice;
	char name[10];
	
	while(1)
	{
	printf("Enter your Name:");
	scanf("%s", name);
	fprintf(ptr,"Name %s\n",name);
	
	printf("Enter your Roll No:");
	scanf("%d",&roll_no);
	fprintf(ptr,"Roll No %d\n",roll_no);
	
	printf("Enter your Marks:");
	scanf("%d",&marks);
	fprintf(ptr,"Marks %d\n",marks);
	
	printf("Press 1 to enter new record\nPress 2 to exit\nEnter your choice:");
	scanf("%d",&choice);
	
	if(choice ==2)
	break;
   }
	fclose(ptr);
}