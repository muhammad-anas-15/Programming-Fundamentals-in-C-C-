#include<stdio.h>
   int sum(int a, int b){
   	return a+b;
   }
   int sub(int a, int b){
   	return a-b;
   }
   int mul(int a, int b){
   	return a*b;
   }
   int division(int a, int b){
   	return a/b;
   }
 
 int main()
 {
 	int a=8;
 	int b=4;
 	
 	int summission= sum(a, b);
    int subtraction= sub (a, b);
    int multiplication= mul(a, b);
    int divisions= division (a, b);
    
    printf("value of sum =%d\n",summission);
    printf("value of sub =%d\n",subtraction);
    printf("value of mul =%d\n",multiplication);
    printf("value of division =%d\n",divisions);
    return 0;
 }
