 
 #include<stdio.h>
 
 int count(int a);
 int b(int a);
   
int main()
{
	int a;
	
	printf("enter the Value of a=" );
	 scanf("%d",&a);
	 
	printf("Value of a after post increment is =%d\n",count(a));
	
	printf("Value of b after pre increment is =%d\n",  b(a));
	return 0;
}
 int count(int a)
  {
  	return ++a;
  }
  int b(int a)
  {
  	return a++;
  }
   
