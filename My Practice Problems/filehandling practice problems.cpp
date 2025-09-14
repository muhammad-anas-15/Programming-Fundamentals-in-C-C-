#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("test.txt","r");
     char ch;
     int count = 1;
     if (ptr==NULL)
	 {
	 	printf("Error Opening File");
	  } 
	  while((ch = fgetc(ptr)) !=EOF)
	  {
	  	if(ch=='\n')
	  	{
	  		count++;
		  }
	  }
	  printf("No of Lines is %d",count);
    /*int age;
    char name[10] ,department;
    int roll_no,clas;*/

   // for(int i=0 ; i<5; i++)
    //{
	 
   
    /*printf("Enter your class:");
    scanf("%d",&clas);
    printf("Enter your department:");
    scanf("%s", department);
    
    printf("\n");
}*/

/*if (ptr != NULL)
{
	printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your roll_no:");
    scanf("%d",roll_no);
    
    fprintf(ptr,"%s %d",name,roll_no);
    fclose(ptr);
}
else
{
    printf("Error Opening File");
}*/

}