#include<stdio.h>
int main()
{
	int cost_price, selling_cost;
	printf("Enter value of cost_price");
	scanf("%d",&cost_price);
	
	printf("Enter value of selling_cost");
	scanf("%d",&selling_cost);
	
	
	if (selling_cost > cost_price)
	{
		printf("there is profit");
		
		int profit =  selling_cost - cost_price;
	
	printf("Profit is %d",profit);
	}
	if (selling_cost < cost_price)
	 {
	 	printf("there is loss;");
	 	
	 	int loss = cost_price - selling_cost ;
	
     	printf("Loss is %d",loss);
	 }
	 if (selling_cost == cost_price)
	 {
	 	printf("neither profit nor loss");
	 }
	 
	 
	
 
	return 0;
}
