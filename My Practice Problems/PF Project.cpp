#include<stdio.h>

int main()
{
	int choice;
	printf("CONTACT MANAGEMENT SYSTEM\n");
        printf("MAIN MENU\n");
        printf("=====================\n");
        printf("[1] Add a new Contact\n");
        printf("[2] List all Contacts\n");
        printf("[3] Search for contact\n");
        printf("[4] Delete a Contact\n");
        printf("[5] Edit a Contact\n");
        printf("[0] Exit\n");
        printf("=====================\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        
        switch (choice) {
            case 1:
                 printf("Add new contact\n");
                break;

            case 2:
                printf("List of all contact\n");
                break;

            case 3:
                printf("Search contact\n");
                break;

            case 4:
                printf("Delete a contact\n");
                break;

            case 5:
                printf("Exit\n");
                break;

            case 0:
                printf("\nThank you for using CMS.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
	
	return 0;
}
