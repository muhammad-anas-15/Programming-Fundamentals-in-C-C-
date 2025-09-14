 #include<stdio.h>
 int sum(int a,int b);
 int sub(int a,int b);
 int mul(int a,int b);
 int divide(int a,int b);
    
 int main() 
 {
   int a, b;
   
  	printf("Enter value of a:");
  	scanf("%d",&a);
  	printf("Enter value of b:");
  	scanf("%d",&b);
  	
  	
  	int sum= sum(a, b);
  	int sub= sub(a, b);
  	int mul= mul(a, b);
  	int divide= divide(a, b);
  	
  	printf("sum=%d\n",sum);
  	printf("sub=%d\n",sub);
  	printf("mul=%d\n",mul);
  	printf("divide=%d\n",divide);
  	
  	return 0;
   
  }
  
  int sum(int a,int b)
  {
  	return a+b;
  }
  
  int sub(int a,int b)
  {
  	return a-b;
  }
  int mul(int a,int b)
  {
  	return a*b;
  }
  int divide(int a,int b)
  {
  	return a/b;
  }
   
