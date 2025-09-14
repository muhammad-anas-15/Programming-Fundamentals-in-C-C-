#include<stdio.h>
int main()
{  
  
  int num,f,s,l,temp,rev;
  
  printf("enter num");
  scanf("%d",&num);
  l= num%10;
  temp= num /10;
  s=temp %10;
  f=temp %10;
  rev=l*100 + s*10 + (--f);
  
 printf("reverse of value =%d",rev);
 
 return 0;
}
