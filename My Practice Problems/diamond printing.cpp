 #include <stdio.h>

int main() {
    
    for (int i=0; i<8; i++)
    {
        for (int k=0; k<=8-i;k++)
        {
            printf(" ");
        }
        
        for (int j=1; j <=i+1; j++)
        {
             
             printf("*");
         }
        
        printf("\n");
    }
     
    return 0;
}