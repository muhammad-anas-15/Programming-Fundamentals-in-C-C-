#include<stdio.h>

int main()
{
	FILE *ptr;
	ptr =fopen("output.txt","r");
	
	char str[1000];
	char ch;
	int vowels = 0, constants= 0, upper_case =0, lower_case=0, sentences=0;
	
	while((ch= fgetc(ptr))!= EOF)
	{
		if(ch =='A' || ch =='a' || ch =='E' || ch =='e'|| ch =='I'|| ch =='i'|| ch =='O'|| ch =='o'|| ch =='U'|| ch =='u')
		{
			vowels++;
		}
		
		if(ch !='A' || ch !='a' || ch !='E' || ch !='e'|| ch !='I'|| ch !='i'|| ch !='O'|| ch !='o'|| ch !='U'|| ch !='u')
		{
			constants++;
		}
		
		if(ch >='A' && ch >='Z' )
		{
			upper_case++;
		}
		
		if(ch >='a' && ch >='z')
		{
			lower_case++;
		}
		if(ch =='\n')
		{
			sentences++;
		}
	}
	printf("Number of Vowels =%d\n",vowels);
	printf("Number of Constants =%d\n",constants);
	printf("Number of Upper Case Letters =%d\n",upper_case);
	printf("Number of Lower Case Letters =%d\n",lower_case);
	printf("Number of Sentences =%d\n",sentences);
	fclose(ptr);
}