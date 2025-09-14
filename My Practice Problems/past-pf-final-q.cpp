#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int random_no(int num)
{
	srand(time(NULL));
	num =rand()%100+1;
	
}
int main()
{
	int num;
	FILE *ptr;
	ptr= fopen("myfile.txt","a");
    
    if (ptr !=NULL)
    {
    	printf("File Created Successfully\n");
    	fprintf(ptr,"File myfile.txt created successfully\n");
    	fprintf(ptr,"Data stored in myfile.txt\n");
   
    	fprintf(ptr,"Random No is =%d\n",random_no(num));
    	fprintf(ptr,"Random No is =%d\n",random_no(num));
    	fprintf(ptr,"Random No is =%d\n",random_no(num));
    	fprintf(ptr,"File closed!");
	}
	else
	{
		printf("File Not Created");
	}
	fclose(ptr);
}