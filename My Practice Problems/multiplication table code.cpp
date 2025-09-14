#include<stdio.h>
int main()
{
 int num;
 printf("Enter the value of no whose multiplication table is to be printed:");
 scanf("%d",&num);
 for (int i = 0; i < 10, i++)
{
 printf("%d X %d =%d\n", num, i, i*num);
}
 return 0;
}
	

