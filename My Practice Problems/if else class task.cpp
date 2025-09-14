#include<stdio.h>
int main()
{
	char alphabet;
		int ascii_value;
	
	printf("Enter character in alphabets");
	scanf("%c",&alphabet);
	
	printf("Enter ascii value of alphabets\n");
	scanf("%d",&ascii_value);
	
	if (ascii_value > 64)  
	
	{ if (ascii_value <91){
	
		printf("Character is in uppercase");}
	}
	else {
		
	}
	if (ascii_value >96)   
	{ if (ascii_value <123){
		printf("Character is in lowercase");
	}
}
	else{
	}
	return 0;
}
