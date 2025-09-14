 #include<stdio.h>
  int mul(int x, int y)
  
  {
  	int multiplication= x*y;
  	return multiplication;
  }
  int main()
  {
  	int x=7, y=4;
  	int multiplication =mul(x,y);
  	printf("value of mul =%d",multiplication);
  }
