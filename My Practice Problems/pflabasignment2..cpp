/* C Program to calculate approximate value of pi(p) constant.
prompt the user to enter value as large the value is there would be approximate value of pie.
*/  

#include <stdio.h>

float calculate_Pie(int no_of_terms); // Function that calculate value.

int main() {
    int no_of_terms; //declaring the number of terms.
    
    float approximate_value_of_Pi; //declaring the value of pi .

     
        printf("Enter the number of terms :"); //Prompt user to enter number of terms.
          scanf("%d",&no_of_terms);

    if (no_of_terms < 1) // Condition to check either no of terms is positive or negative.
	{
        printf("Please Enter a positive integer for the no of terms \n"); //If negative enter positive integer. 
        
        return 0;
		   
    }
    
   else //or if no of terms is positive .
   {
   
     
     approximate_value_of_Pi = calculate_Pie(no_of_terms);// calling the calculate_pi function 
     
    printf("The approximate value of p is = %f\n",approximate_value_of_Pi);//output
   }

    return 0;
}

float calculate_Pie(int no_of_terms) 
{
   float Pie= 3.0;  //initializing value of pi as 3.0.

    for (int i = 1; i <=no_of_terms; i++) //loops iterates upto number of terms.
	{
       
        float Numerator= 4*i; //numerator will multiply with all values.
        
        float Denominator= (2*i)*(2*i + 1)*(2*i + 2); //denominator will multiply series only even numbers.

        
        if (i % 2 == 1) //if it's even
		{
            Pie += Numerator / Denominator; //divide both.
            
        }
		 else //if it's odd
		 
		 {
            Pie -= Numerator / Denominator; //divide both.
        }
    }

    return Pie;//return approximate value of pi
}