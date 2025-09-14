#include<stdio.h>

int main()
{
	int no_of_hours,no_of_weeks;
	float amount,income_before_taxes,income_after_taxes,money_on_clothes,money_on_school_supplies,money_on_saving_bonds,money_parents_spends;
	no_of_hours = 35;
	no_of_weeks =5;
	amount = 15.50;
	
	
	income_before_taxes = (35*5)*15.50;
	income_after_taxes =(income_before_taxes *(0.14) - income_before_taxes);
	
	
	printf("Enter the no of hours you spend per week =%d",no_of_hours);
	printf("Income before taxes =%d",income_before_taxes);
	printf("Income after taxes =%d",income_after_taxes);
	
	return 0;
	
	
	
	
	
}
