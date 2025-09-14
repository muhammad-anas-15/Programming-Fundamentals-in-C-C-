#include<stdio.h>
int main()
{
	FILE *ptr;
	
	char buff[1000];
	ptr = fopen("Output.txt","r");
	
	while((fscanf(ptr,"%s ",buff))!= EOF)
	{
	
	printf("%s ",buff);
}
	
	fclose(ptr);
}