#include<stdio.h>

int main()
{
	/*int Coke =10 ,Pepsi =15 ,Sprite =15, seven7UP =25;
	int Coke_Price =5 ,Pepsi_Price =7 ,Sprite_Price =7, seven7UP_Price =3; */
	int choice,Quantity,total_price;
	float total_quantity_1=0.0, total_quantity_2=0.0, total_quantity_3=0.0, total_quantity_4=0.0, total_quantity_5=0.0;
	char option;
	float total_bill;
	
	
	do
	{
	
	printf("***Welcome to Our Restaurant!***\n\n");
	printf("Main Menu\n");
	printf("1) Burger Price:$5.99\n");
	printf("2) Pizza  Price:$7.99\n");
	printf("3) Salad  Price:$4.49\n");
	printf("4) Pasta  Price:$8.99\n");
	printf("5) Soda   Price:$1.99\n");
	
	
	printf("Enter the Item you want to Purchase:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_quantity_1 =Quantity * 5.99;
			
			
			break;
			
		case 2:
			printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_quantity_2 =Quantity * 7.99;
			
			
			
			break;
			
		case 3:
			printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_quantity_3 =Quantity * 4.49;
			
		
			break;
			
		
		case 4:
			printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_quantity_4 =Quantity * 8.99;
			
		
			break;
			
		case 5:
		    printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_quantity_5 =Quantity * 1.99;
			
		    
			break;	
			
		default:
			 printf("Invalid Input! Please try again:");
		
	}
		printf("Item added to your order.\n");
		
		printf("Do you want to order more items? (Y/N)");
		scanf(" %c",&option);
	}

		while(option=='Y' || option=='y');
		
		total_bill = total_quantity_1 + total_quantity_2 + total_quantity_3 + total_quantity_4 + total_quantity_5;
      	printf("Thank you for order!\n");
	    printf("\n");
	    printf("TotalBill is %f",total_bill);
	
	
	return 0;
}