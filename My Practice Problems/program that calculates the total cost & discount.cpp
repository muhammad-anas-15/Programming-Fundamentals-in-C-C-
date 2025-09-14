#include<stdio.h>
 
 int main()
 {
 	int total_cost,discount;
 	
 	printf("Enter value of total_cost");
 	scanf("%d",&total_cost);
 	
 	printf("Enter value of discount");
 	scanf("%d",&discount);
 	
 	if(total_cost>100)
 	{
 		discount =(total_cost*0.1);
 		int final_cost =discount+total_cost;
 		
 		printf("Discount on total_cost is=%d",final_cost);
 		
	 }
	 else
	 {
	 	printf("Discount is not applied");
	 }
 }
