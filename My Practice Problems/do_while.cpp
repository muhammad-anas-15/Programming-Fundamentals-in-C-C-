#include <stdio.h>

int main() {
     int sum =0, i=2,average =0;
    do 
    {   
        sum+=i;
        average =sum/i;
        i++;
    }
    while (i<11);
    printf("Average is %d",average);
    return 0;
}