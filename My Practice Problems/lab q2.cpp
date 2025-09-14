#include<stdio.h>
#include<math.h>

float calculate_simple_interest(int costumer_saving_account_balance);
float calculate_compound_interest(int costumer_saving_account_balance);
float calculate_compound_interest_for_specific_year(int costumer_saving_account_balance);

 int main()
{
	int costumer_saving_account_balance,specific_year;
	
	printf("Enter value of costumer acount balance:");
	scanf("%d",&costumer_saving_account_balance);
	
	 
	
	calculate_simple_interest(costumer_saving_account_balance);
	
	printf("Value of simple interest is =%f\n",calculate_simple_interest(costumer_saving_account_balance));
	
	calculate_compound_interest(costumer_saving_account_balance);
	printf("Value of compound interest is =%f\n",	calculate_compound_interest(costumer_saving_account_balance));
	
	calculate_compound_interest_for_specific_year(costumer_saving_account_balance);
	printf("Value of compound interest for specific year is =%f\n",calculate_compound_interest_for_specific_year(costumer_saving_account_balance));
	
	
	return 0;
}
float calculate_simple_interest(int costumer_saving_account_balance)
 {
 	return (costumer_saving_account_balance * 0.05 * 1) /100;
 }
 float calculate_compound_interest(int costumer_saving_account_balance)
 { 
	
 	return (costumer_saving_account_balance * pow((1 + 0.12/100), (1*1)))
 }
 float calculate_compound_interest_for_specific_year(int costumer_saving_account_balance)
 {
 	int specific_year,interest_rate;
     
 		printf("Enter value of no of years\n");
	scanf("%d",&specific_year);
	
	printf("Enter value of interest rate\n");
	scanf("%d",&interest_rate);
	
	
 	return  (costumer_saving_account_balance * pow((1 + interest_rate/100), (specific_year * specific_year))) ;
 }
 
