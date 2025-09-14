#include<stdio.h>
 int leapyear(int a)
 
 {
   if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
 	return 1;
 }
 else
 {
 	return 0;
 }
}
  int main()
  {
  	int a;
  	printf("Enter value of a:");
  	scanf("%d",&a);
  	
  	if (leapyear(a)) {
        printf("%d is a leap year.\n", a);
    } else {
        printf("%d is not a leap year.\n", a);
    }

    return 0;
}
  
