#include<stdio.h>

int sumoftotalmarks(int math_marks, int science_marks, int english_marks);
float percentage(int total_marks);

int main()
{

  
  int s1_ID=123;
  int s1_math_marks= 79;
  int s1_science_marks= 63;
  int s1_english_marks =90;
  
  int s1_total_marks =sumoftotalmarks(s1_math_marks, s1_science_marks, s1_english_marks);
  float s1_percentage=percentage(s1_total_marks);
  
  
  int s2_ID=456;
  int s2_math_marks= 59;
  int s2_science_marks= 63;
  int s2_english_marks =70;
  
  int s2_total_marks =sumoftotalmarks(s2_math_marks, s2_science_marks, s2_english_marks);
  float s2_percentage=percentage(s2_total_marks);
  
  int s3_ID=789;
  int s3_math_marks= 65;
  int s3_science_marks= 39;
  int s3_english_marks =87;
  
  int s3_total_marks =sumoftotalmarks(s3_math_marks, s3_science_marks, s3_english_marks);
  float s3_percentage=percentage(s3_total_marks);
  
  printf("Student ID: %d\n", s1_ID);
    printf("Mathematics Marks: %d\n", s1_math_marks);
    printf("Science Marks: %d\n", s1_science_marks);
    printf("English Marks: %d\n", s1_english_marks);
    printf("Total Marks: %d\n", s1_total_marks);
    printf("Percentage: %.2f%%\n\n", s1_percentage);

    printf("Student ID: %d\n", s2_ID);
    printf("Mathematics Marks: %d\n", s2_math_marks);
    printf("Science Marks: %d\n", s2_science_marks);
    printf("English Marks: %d\n", s2_english_marks);
    printf("Total Marks: %d\n", s2_total_marks);
    printf("Percentage: %.2f%%\n\n", s2_percentage);

    printf("Student ID: %d\n", s3_ID);
    printf("Mathematics Marks: %d\n", s3_math_marks);
    printf("Science Marks: %d\n", s3_science_marks);
    printf("English Marks: %d\n", s3_english_marks);
    printf("Total Marks: %d\n", s3_total_marks);
    printf("Percentage: %.2f%%\n", s3_percentage);

    return 0;
}
  int sumoftotalmarks(int math_marks, int science_marks, int english_marks)
  {
  return math_marks + science_marks + english_marks;
}
float percentage(int total_marks)
{
	return  (total_marks *100)/ 300;
}


