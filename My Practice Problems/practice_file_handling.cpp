#include<stdio.h>

int main()
{
	FILE *ptr;
	ptr =fopen("file3.txt","w");
	char str[1000];
	fprintf(ptr,"Both Google Bard and ChatGPT can be used for market research. However, there are some key differences between the two models regarding their suitability for this use case. Bard is better at understanding customer needs and identifying market trends.");
	
   /*	while(fgets(str,1000,ptr) !=NULL)
	 {
		printf("%s\n",str);
	 }*/
	 
	fclose(ptr);
	return 0;
}