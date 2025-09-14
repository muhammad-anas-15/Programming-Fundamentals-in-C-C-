 #include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter a");
	scanf("%d",&a);
	
	printf("enter b");
	scanf("%d",&b);
	
	printf("enter c");
	scanf("%d",&c);
	
	if (a+b>c && b+c>a && a+c>b)
	{
	printf("they form triangle");
    }
    else
    {
    	printf("they don't form triangl");
	}
	return 0;
}
