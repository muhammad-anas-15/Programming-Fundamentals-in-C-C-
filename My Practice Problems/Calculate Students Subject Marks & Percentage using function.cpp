#include<stdio.h>

int calculate_sum_of_marks(int math_marks, int science_marks, int english_marks);
float calculate_percentage(int sum_of_marks);

  int main() {
    int s1_student_ID = 1;
    int s1_math_marks;
    int s1_science_marks;
    int s1_english_marks;

    printf("Enter no of s1 math marks:\n");
    scanf("%d", &s1_math_marks);
    printf("Enter no of s1  science marks:\n");
    scanf("%d", &s1_science_marks);
    printf("Enter no of s1  english marks:\n");
    scanf("%d", &s1_english_marks);

    int s1_total_marks = calculate_sum_of_marks(s1_math_marks, s1_science_marks, s1_english_marks);
    float s1_percentage = calculate_percentage(s1_total_marks);

    printf("Student Id of First student: %d\n", s1_student_ID);
    printf("Student 1 math marks: %d\n", s1_math_marks);
    printf("Student 1 science marks: %d\n", s1_science_marks);
    printf("Student 1 english marks: %d\n", s1_english_marks);

    printf("Sum of marks is = %d\n", s1_total_marks);
    printf("Percentage is = %f\n", s1_percentage);

    int s2_student_ID =2;
	int s2_math_marks ;
	int s2_science_marks ;
	int s2_english_marks ;
	
	printf("Enter no of s2 math marks:");
	scanf("%d",&s2_math_marks);
		printf("Enter no of s2 english marks:");
	scanf("%d",&s2_science_marks);
		printf("Enter no of s2 science marks:");
	scanf("%d",&s2_english_marks);
	
	int s2_total_marks =calculate_sum_of_marks(s2_math_marks ,s2_science_marks, s2_english_marks);
	float percentage(calculate_sum_of_marks);
	printf("Student Id of Second student %d\n",s2_student_ID);
	printf("Student 2 math marks %d\n",s2_math_marks);
	printf("Student 2 science marks %d\n",s2_science_marks);
	printf("Student 2 english marks %d\n",s2_english_marks);
	printf("Sum of marks is =%d\n",s2_total_marks);
	printf("Percentage is =%f\n",float percentage(calculate_sum_of_marks));
	
	int s3_student_ID =3;
	int s3_math_marks ;
	int s3_science_marks ;
	int s3_english_marks ;
	
	printf("Enter no of s3 math marks:");
	scanf("%d",&s3_math_marks);
		printf("Enter no of s3 english marks:");
	scanf("%d",&s3_science_marks);
		printf("Enter no of s3 science marks:");
	scanf("%d",&s3_english_marks);
	
	int s3_total_marks =calculate_sum_of_marks(int s3_math_marks, int s3_science_marks, int s3_english_marks);
	float percentage(calculate_sum_of_marks);
	printf("Student Id of Third student %d\n",s3_student_ID);
	printf("Student 3 math marks %d\n",s3_math_marks);
	printf("Student 3 science marks %d\n",s3_science_marks);
	printf("Student 3 english marks %d\n",s3_english_marks);
	printf("Sum of marks is =%d\n",s3_total_marks);
	printf("Percentage is =%f\n",float percentage(calculate_sum_of_marks));
	

    return 0;
}

int calculate_sum_of_marks(int math_marks, int science_marks, int english_marks) {
    return math_marks + science_marks + english_marks;
}

float calculate_percentage(int sum_of_marks) {
    return (sum_of_marks * 100.0) / 300.0;
}

