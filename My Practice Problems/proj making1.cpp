#include<stdio.h>
#include<stdlib.h>

void create_new_contact(int *contact_count, int Maximum_Contact, int Unique_ID[], char first_name[][50], char last_name[][50], long long phone_number[], char address[][50], char email[][50])
{
	if(*contact_count < Maximum_Contact)
	{
		printf("Enter Unique ID: ");
		scanf("%d", &Unique_ID[*contact_count]);
		
		printf("Enter First Name: ");
		scanf("%s", first_name[*contact_count]);
		
		printf("Enter Last Name: ");
		scanf("%s", last_name[*contact_count]);
		
		printf("Enter Phone NmbeDr: ");
		scanf("%lld", &phone_number[*contact_count]);
		
		printf("Enter Address: ");
		scanf("%s", address[*contact_count]);
		
		printf("Enter Your Email: ");
		scanf("%s", email[*contact_count]);
		
		(*contact_count)++ ;
		
		printf("Contact is successfully created!");
	}
		
	else
	{
		printf("Maximum Number of Contacts has reached");
		
	}	
		
		
	
	
}

int main()
{
  const int Maximum_Contact =100;
  int Unique_ID[Maximum_Contact];
  char first_name[Maximum_Contact][50];
  char last_name[Maximum_Contact][50];
  long long phone_number[Maximum_Contact];
  char address[Maximum_Contact][50];
  char email[Maximum_Contact][50];
  
  int contact_count= 0;	
  int choice,option;
	
 do
 {
 	printf("***Welcome to Contact Managment System (CMS)***\t\t\n");
 	printf("\tMain Menu\t\n");
 	printf("==========================\n");
 	printf("Press [1] for Creating New Contact:");
 	
 	printf("Enter your choice:");
 	scanf("%d",&choice);
 	
 	switch(choice)
 	{
 		case 1:
 			create_new_contact(&contact_count,Maximum_Contact,Unique_ID,first_name,last_name,phone_number,address,email);
 			
 			
 		default: 
		 printf("Invalid Choice!");	
 			
	 }
 	
 }
	while(option!=0);
}
	
