#include <stdio.h>
#include <stdlib.h>

void createContact(int MAX_CONTACTS, int *contactCount, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]);
void showContact(int index, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]);
void readAllContacts(int contactCount, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]);
void searchContact(int searchID, int contactCount, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]);
void deleteContact(long long phoneNumber, int *contactCount, int uniqueIDs[], long long phoneNumbers[], char addresses[][50], char emails[][50]);
void editContact(int searchID, int contactCount, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]);
void saveContactsToFile(int contactCount, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]);
void loadContactsFromFile(int *contactCount, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]);

int main() {
    const int MAX_CONTACTS = 100;
    int contactCount = 0;

    int uniqueIDs[MAX_CONTACTS];
    char firstNames[MAX_CONTACTS][50];
    char lastNames[MAX_CONTACTS][50];
    long long phoneNumbers[MAX_CONTACTS];
    char addresses[MAX_CONTACTS][50];
    char emails[MAX_CONTACTS][50];

    int choice;
    int opt;

    loadContactsFromFile(&contactCount, uniqueIDs, firstNames, lastNames, phoneNumbers, addresses, emails);

    do {
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
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createContact(MAX_CONTACTS, &contactCount, uniqueIDs, firstNames, lastNames, phoneNumbers, addresses, emails);
                break;

            case 2:
                readAllContacts(contactCount, uniqueIDs, firstNames, lastNames, phoneNumbers, addresses, emails);
                break;

            case 3:
                if (contactCount > 0) {
                    int searchID;
                    printf("Enter unique ID to search: ");
                    scanf("%d", &searchID);
                    searchContact(searchID, contactCount, uniqueIDs, firstNames, lastNames, phoneNumbers, addresses, emails);
                } else {
                    printf("No contacts to search.\n");
                }
                break;

            case 4:
                if (contactCount > 0) {
                    long long deleteNumber;
                    printf("Enter phone no. to delete: ");
                    scanf("%lld", &deleteNumber);
                    deleteContact(deleteNumber, &contactCount, uniqueIDs, phoneNumbers, addresses, emails);
                } else {
                    printf("No contacts to delete.\n");
                }
                break;

            case 5:
                if (contactCount > 0) {
                    int editID;
                    printf("Enter the unique ID to edit: ");
                    scanf("%d", &editID);
                    editContact(editID, contactCount, uniqueIDs, firstNames, lastNames, phoneNumbers, addresses, emails);
                } else {
                    printf("No contacts to edit.\n");
                }
                break;

            case 0:
                printf("\nThank you for using CMS.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

        if (choice != 0) {
            printf("\n\nEnter your choice:\n[1] Main Menu\n[0] Exit\n");
            scanf("%d", &opt);
        }

    } while (opt != 0);

    saveContactsToFile(contactCount, uniqueIDs, firstNames, lastNames, phoneNumbers, addresses, emails);

    return 0;
}

// (Existing contact management functions...)

void saveContactsToFile(int contactCount, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]) {
    FILE *file = fopen("contacts.txt", "w");

    if (file != NULL) {
        fprintf(file, "%d\n", contactCount);

        for (int i = 0; i < contactCount; i++) {
            fprintf(file, "%d %s %s %lld %s %s\n", uniqueIDs[i], firstNames[i], lastNames[i], phoneNumbers[i], addresses[i], emails[i]);
        }

        fclose(file);
        printf("Contacts saved to file.\n");
    } else {
        printf("Error opening file for writing.\n");
    }
}

void loadContactsFromFile(int *contactCount, int uniqueIDs[], char firstNames[][50], char lastNames[][50], long long phoneNumbers[], char addresses[][50], char emails[][50]) {
    FILE *file = fopen("contacts.txt", "r");

    if (file != NULL) {
        fscanf(file, "%d", contactCount);

        for (int i = 0; i < *contactCount; i++) {
            fscanf(file, "%d %s %s %lld %s %s", &uniqueIDs[i], firstNames[i], lastNames[i], &phoneNumbers[i], addresses[i], emails[i]);
        }

        fclose(file);
        printf("Contacts loaded from file.\n");
    } else {
        printf("No saved contacts found.\n");
    }
}

