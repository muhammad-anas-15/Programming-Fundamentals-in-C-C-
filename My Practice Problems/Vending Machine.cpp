#include<stdio.h>

int main()
{
	int Coke =10 ,Pepsi =15 ,Sprite =15, seven7UP =25;
	int Coke_Price =5 ,Pepsi_Price =7 ,Sprite_Price =7, seven7UP_Price =3;
	int choice,Quantity,total_price,remaining_stock;
	
	
	
	
	printf("***Welcome to the Vending Machine!***\n\n");
	printf("1) Coke (Price:$5, Available: 10)\n");
	printf("2) Pepsi (Price:$7, Available: 15)\n");
	printf("3) Sprite (Price:$7, Available: 15)\n");
	printf("4) 7UP (Price:$3, Available: 25)\n");
	
	
	printf("Enter the Drink you want to Purchase:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_price = Quantity * Coke_Price;
			remaining_stock = Coke - Quantity;
			
			printf("You have ordered %d  for Coke total of $%d",Quantity,total_price);
			printf("\n\n");
			
			printf("*** Available Stock: ***\n\n");
			printf("1) Coke (Price:$5, Available: %d)\n",remaining_stock);
	        printf("2) Pepsi (Price:$7, Available: 15)\n");
	        printf("3) Sprite (Price:$7, Available: 15)\n");
	        printf("4) 7UP (Price:$3, Available: 25)\n");
			
			break;
			
		case 2:
			printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_price = Quantity * Pepsi_Price;
			remaining_stock = Pepsi - Quantity;
			
			printf("You have ordered %d  for Coke total of $%d",Quantity,total_price);
			printf("\n\n");
			
			printf("*** Available Stock: ***\n\n");
			printf("1) Coke (Price:$5, Available: 10)\n");
	        printf("2) Pepsi (Price:$7, Available: %d)\n",remaining_stock);
	        printf("3) Sprite (Price:$7, Available: 15)\n");
	        printf("4) 7UP (Price:$3, Available: 25)\n");
			
			break;
			
		case 3:
			printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_price = Quantity * Sprite_Price;
			remaining_stock = Sprite - Quantity;
			
			printf("You have ordered %d  for Coke total of $%d",Quantity,total_price);
			printf("\n\n");
			
			printf("*** Available Stock: ***\n\n");
			printf("1) Coke (Price:$5, Available: 10)\n");
	        printf("2) Pepsi (Price:$7, Available: 15)\n");
	        printf("3) Sprite (Price:$7, Available: %d)\n",remaining_stock);
	        printf("4) 7UP (Price:$3, Available: 25)\n");
			
			break;
			
		
		case 4:
			printf("Enter Qyantity:");
			scanf("%d",&Quantity);
			
			total_price = Quantity * Sprite_Price;
			remaining_stock =Sprite - Quantity;
			
			printf("You have ordered %d  for Coke total of $%d",Quantity,total_price);
			printf("\n\n");
			
			printf("*** Available Stock: ***\n\n");
			printf("1) Coke (Price:$5, Available: 10)\n");
	        printf("2) Pepsi (Price:$7, Available: 15)\n");
	        printf("3) Sprite (Price:$7, Available: 15)\n");
	        printf("4) 7UP (Price:$3, Available: %d)\n",remaining_stock);
			
			break;
			
			
		default:
			 printf("Invalid Input! Please try again:");
		
		
		
		
	}
}