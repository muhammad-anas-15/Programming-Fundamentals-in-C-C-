#include<stdio.h>

int main()
{
	FILE *ptr;
	char text[1000];
	ptr =fopen("output.txt","r");
	
   
    while((fgets(text,1000,ptr)) !=NULL)  
	{
		puts(text);
		
	}        
	fclose(ptr);
	
}