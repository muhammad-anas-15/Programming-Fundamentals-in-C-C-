#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_names_by_length(const char *file12, int length) {
    FILE *ptr;
    ptr = fopen(file12, "r");

    if (ptr == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char str[1000];

    while (fgets(str, sizeof(str), ptr) != NULL) {
        str[strcspn(str, "\n")] = '\0';
if (strlen(str) == length) {
            printf("%s\n", str);
        }
    }

  fclose(ptr);
}

int main()
{
    const char *file12 = "file12.txt";
    int length_to_print = 3;

    printf("Names with length %d:\n", length_to_print);
    print_names_by_length(file12, length_to_print);
    
    
    
   
    FILE *ptr;
    ptr = fopen("file12.txt","r");
    
    char str[1000];
    int total_length= 0;
    while(fgets(str,1000,ptr) !=NULL)
    
    {
    	str[strcspn(str, "\n")] = '\0';
    	total_length += strlen(str);
    	printf("%.4s\n",str);
	}
    fclose(ptr);
    printf("Sum of lengths of all names: %d\n", total_length);
    
return 0;
}