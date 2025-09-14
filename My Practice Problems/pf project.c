#include <stdio.h>
#include <stdlib.h>
 
#define MAX_CONTACTS 100

int uniqueIDs[MAX_CONTACTS];
char firstNames[MAX_CONTACTS][50];
char lastNames[MAX_CONTACTS][50];
long long phoneNumbers[MAX_CONTACTS];
char addresses[MAX_CONTACTS][50];
char emails[MAX_CONTACTS][50];

int contactCount = 0;

void createContact() 
{
    if (contactCount < MAX_CONTACTS) {
    	
        printf("Enter a unique ID: ");
        scanf("%d", &uniqueIDs[contactCount]);
        
        printf("Enter your first name: ");
        scanf("%s", firstNames[contactCount]);
        
        printf("Enter your last name: ");
        scanf("%s", lastNames[contactCount]);
        
        printf("Enter phone: ");
        scanf("%lld", &phoneNumbers[contactCount]);
        
        printf("Enter address: ");
        scanf("%s", addresses[contactCount]);
        
        printf("Enter email: ");
        scanf("%s", emails[contactCount]);

        contactCount++;
        printf("Contact has been successfully created.\n");
    } 
	else 
	{
        printf("Maximum number of contacts reached.\n");
    }
}

void showContact(int index) {
    printf("Unique ID: %d\n", uniqueIDs[index]);
    printf("Name: %s %s\n", firstNames[index], lastNames[index]);
    printf("Phone: %lld\n", phoneNumbers[index]);
    printf("Address: %s\n", addresses[index]);
    printf("Email: %s\n", emails[index]);
}

void readAllContacts() 
{
    if (contactCount > 0) {
        printf("================================\n");
        printf("LIST OF CONTACTS\n");
        printf("================================\n");

        for (int i = 0; i < contactCount; i++) {
            showContact(i);
            printf("================================\n");
        }
    } 
	else 
	{
        printf("No contacts to display.\n");
    }
}

void searchContact(int searchID) {
    int found = 0;

    printf("================================\n");
    printf("SEARCH RESULTS\n");
    printf("================================\n");

    for (int i = 0; i < contactCount; i++) {
        if (searchID == uniqueIDs[i]) {
            showContact(i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No record found with the specified Unique ID.\n");
    }
}

void deleteContact(long long phoneNumber) // Delete contact by name.
{
    int found = 0;

    for (int i = 0; i < contactCount; i++) 
	{
        if (phoneNumbers[i] == phoneNumber) 
		{
            found = 1;
            
            for (int j = i; j < contactCount - 1; j++)
			 {
                uniqueIDs[j] = uniqueIDs[j + 1];
                phoneNumbers[j] = phoneNumbers[j + 1];
                
            }
            contactCount--;
            printf("Contact deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Contact not found with the specified phone number.\n");
    }
}

void editContact(int searchID) {
    int found = 0;

    printf("Edit contact\n");
    printf("===============================\n");

    for (int i = 0; i < contactCount; i++) {
        if (searchID == uniqueIDs[i]) {
            printf("Enter new first name: ");
            scanf("%s", firstNames[i]);
            printf("Enter new last name: ");
            scanf("%s", lastNames[i]);
            printf("Enter new phone: ");
            scanf("%lld", &phoneNumbers[i]);
            printf("Enter new address: ");
            scanf("%s", addresses[i]);
            printf("Enter new email: ");
            scanf("%s", emails[i]);

            printf("Contact Successfully Updated...\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No record found with the specified Unique ID.\n");
    }
}

int main() {
        printf("[0] Exit\n");{
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createContact();
                break;

            case 2:
                readAllContacts();
                break;

            case 3:
                if (contactCount > 0) {
                    int searchID;
                    printf("Enter unique ID to search: ");
                    scanf("%d", &searchID);
                    searchContact(searchID);
                } else {
                    printf("No contacts to search.\n");
                }
                break;

            case 4:
                if (contactCount > 0) // contact should be deleted by any one id,name or no.
				{
                    long long deleteNumber;
                    printf("Enter phone no. to delete: ");
                    scanf("%lld", &deleteNumber);
                    deleteContact(deleteNumber);
                } else {
                    printf("No contacts to delete.\n");
                }
                break;

            case 5:                   {
				// contact should be edit by any one id,name or no. 
				{
                    int editID;
                    printf("Enter the unique ID to edit: ");
                    scanf("%d", &editID);
                    editContact(editID);
                } else 
				{
                    printf("No contacts to edit.\n");
                }
                break; {
                printf("\nThank you for using CMS.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");{

        int opt;
        printf("\n\nEnter your choice:\n[1] Main Menu\n[0] Exit\n");
        scanf("%d",&opt);

        if (opt == 0) {
            printf("Thank you for using CMS.\n");
            exit(0);
        }
    }

    return 0;
}
                    