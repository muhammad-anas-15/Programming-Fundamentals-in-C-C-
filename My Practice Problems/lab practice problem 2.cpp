#include<stdio.h>

int student1(int math_marks, int science_marks, int english_marks);
int student2(int math_marks, int science_marks, int english_marks);
int student3(int math_marks, int science_marks, int english_marks);

int main()
{
	 int student1,student2,student3, s1_math_marks,s1_science_marks,s1_english_marks,s2_math_marks,s2_science_marks,s2_english_marks,s3_math_marks,s3_science_marks,s3_english_marks;
	   int total_marks= 300;
   s1_math_marks=70;
   s1_science_marks=60;
   s1_english_marks=75;
   
   
   s2_math_marks=70;
   s2_science_marks=66;
   s2_english_marks=85;
   
   
   s3_math_marks=80;
   s3_science_marks=56;
   s3_english_marks=34;
   
	 
	int result1 =(s1_math_marks,s1_science_marks,s1_english_marks);
	 
	 printf("%d\n",result1);
	 
	 int result2 =(s2_math_marks,s2_science_marks,s2_english_marks);
	 
	 printf("%d\n",result2);
	 
	int result3 =(s3_math_marks,s3_science_marks,s3_english_marks);
	 
	 printf("%d\n",result3);
	 
	 
	
	return 0;
}
 int student1(int math_marks, int science_marks, int english_marks)
 {
 	printf("Name : Ali");
 	printf("Class : 9th");
 	printf("Student ID: 123");
 	
   int  sum,s1_math_marks,s1_science_marks,s1_english_marks, percentage,total_marks,obtain_marks;
   
   sum =s1_math_marks + s1_science_marks + s1_english_marks;
   percentage = (sum *100) / total_marks;
   
   return percentage;
 }
 int student2(int math_marks, int science_marks, int english_marks)
 {
 	printf("Name : Ahsan");
 	printf("Class : 9th");
 	printf("Student ID: 456");
 	
   int  sum,s2_math_marks,s2_science_marks,s2_english_marks, percentage,total_marks,obtain_marks;
   
    
   sum =s2_math_marks + s2_science_marks + s2_english_marks;
   
   percentage = (sum *100) / total_marks;
   
   return percentage;
 }
 int student3(int math_marks, int science_marks, int english_marks)
 {
 	printf("Name : Rizwan");
 	printf("Class : 9th");
 	printf("Student ID: 789");
 	
   int  sum,s3_math_marks,s3_science_marks,s3_english_marks, percentage,total_marks,obtain_marks;
   
   sum =s3_math_marks + s3_science_marks + s3_english_marks;
   
   percentage = (sum *100) / total_marks;
   
   return percentage;
 }
