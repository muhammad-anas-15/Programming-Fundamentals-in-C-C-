#include<stdio.h>
void add_a_new_contact(int Unique_ID[5], char Name[50], long long Phone_Number[20], char address[50], char email[50], int Maximum_Contacts, int contact_count);
void list_of_all_contacts(int unique_ID[5], char Name[50], long long phone_Number[20], char address[50], char email[50]);
int main()
{
	int Unique_ID[5];
	char Name[50];
	long long Phone_Number[20];
	char address[50];
	char email[50];
	
	const int Maximum_Contacts =100;
	int contact_count =0;
	
	int choice,opt;
	
	
    do {
        printf("CONTACT MANAGEMENT SYSTEM (CMS)\n");
        printf("MAIN MENU\n");
        printf("=====================\n");
        printf("Press (1) to Add a new Contact\n");
        printf("Press (2) to List all Contacts\n");
        printf("Press (3) to Search for contact\n");
        printf("Press (4) to Delete a Contact\n");
        printf("Press (5) to Edit a Contact\n");
        printf("Press (0) to Exit the program\n");
        printf("=====================\n");

        printf("Enter your choice from (1-5): ");
        scanf("%d",&choice);

        switch (choice)
		{
            case 1:
                add_a_new_contact(Unique_ID, Name, Phone_Number, address, email, Maximum_Contacts, contact_count);
                break;

            case 2:
                list_of_all_contacts(contact_count, Unique_ID, Name, Phone_Number, address, email);

                break;

            case 3:
                if (contactCount > 0)
				 {
                    int searchID;
                    printf("Enter unique ID to search: ");
                    scanf("%d", &searchID);
                    searchContact(searchID,&contactCount, uniqueIDs, firstNames, lastNames, phoneNumbers, addresses, emails);
                } 
				else 
				{
                    printf("No contacts to search.\n");
                }
                break;

            case 4:
                if (contactCount > 0) 
				{
                    int searchID;
                    printf("Enter Unique id to Delete Contact: ");
                    scanf("%d", &searchID);
                    deleteContact(searchID, &contactCount, uniqueIDs, phoneNumbers, addresses, emails);
                } 
				else 
				{
                    printf("No contacts to delete.\n");
                }
                break;

            case 5:
                if (contactCount > 0) 
				{
                    int editID;
                    printf("Enter the unique ID to edit: ");
                    scanf("%d", &editID);
                    editContact(editID,&contactCount, uniqueIDs, firstNames, lastNames, phoneNumbers, addresses, emails);
                } 
				else 
				{
                    printf("No contacts to edit.\n");
                }
                break;

            case 0:
                printf("\nThank you for using CMS.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
         
		 if (choice != 0) 
		 {
            printf("\n\nEnter your choice:\n[1] Main Menu\n[0] Exit\n");
            scanf("%d", &opt);
        }

    } while (opt != 0);

    return 0;


}

void add_a_new_contact(int Unique_ID[5], char Name[50], long long Phone_Number[20], char address[50], char email[50], int Maximum_Contacts, int contact_count)
{
	if (contact_count < Maximum_Contacts) 
    {
        printf("Enter a unique ID: ");
        scanf("%d", &uniqueIDs[contact_count]);

        printf("Enter your first name: ");
        scanf("%s", firstNames[contact_count]);

        printf("Enter your last name: ");
        scanf("%s", lastNames[contact_count]);

        printf("Enter phone: ");
        scanf("%lld", &phoneNumbers[contact_count]);

        printf("Enter address: ");
        scanf("%s", addresses[contact_count]);

        printf("Enter email: ");
        scanf("%s", emails[contact_count]);

        contactCount++;
        printf("Contact has been successfully created.\n");
    } 
	else 
	{
        printf("Maximum number of contacts reached.\n");
    }
}

void list_of_all_contacts(int contact_count, int unique_ID[5], char Name[50], long long phone_Number[20], char address[50], char email[50])
{
    if (contact_count >= 0 && contact_count < 5) // Check if contact_count is within valid range
    {
        printf("Unique ID: %d\n", unique_ID[contact_count]);
        printf("Name: %s\n", Name[contact_count]);
        printf("Phone: %lld\n", phone_Number[contact_count]);
        printf("Address: %s\n", address[contact_count]);
        printf("Email: %s\n", email[contact_count]);
    }
    else
    {
        printf("Invalid contact_count.\n");
    }
}

