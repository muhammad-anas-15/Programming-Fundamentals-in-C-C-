#include<stdio.h>
int main()
{ 
    char n[6] ={'H','A','R','O','O','N'};
     
    
    for (int i=0 ;i<6; i++)
    {
        for (int j=0 ;j<6 ;j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("%c",n[i]);
            }
            else
            {
            	printf(" ");
			}
        }
        printf("\n");
    }
    
}