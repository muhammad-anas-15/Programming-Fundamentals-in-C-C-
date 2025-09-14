#include <stdio.h>
int calculateSumOfMarks(int math_marks, int science_marks, int english_marks);
float calculatePercentage(int total_marks);

int main() {
    // Student 1
    int student1_ID = 1;
    int student1_math_marks = 70;
    int student1_science_marks = 60;
    int student1_english_marks = 75;

    // Calculate total marks for Student 1
    int student1_total_marks = calculateSumOfMarks(student1_math_marks, student1_science_marks, student1_english_marks);

    // Calculate percentage for Student 1
    float student1_percentage = calculatePercentage(student1_total_marks);

    // Student 2
    int student2_ID = 2;
    int student2_math_marks = 80;
    int student2_science_marks = 75;
    int student2_english_marks = 90;

    // Calculate total marks for Student 2
    int student2_total_marks = calculateSumOfMarks(student2_math_marks, student2_science_marks, student2_english_marks);

    // Calculate percentage for Student 2
    float student2_percentage = calculatePercentage(student2_total_marks);

    // Student 3
    int student3_ID = 3;
    int student3_math_marks = 65;
    int student3_science_marks = 70;
    int student3_english_marks = 85;

    // Calculate total marks for Student 3
    int student3_total_marks = calculateSumOfMarks(student3_math_marks, student3_science_marks, student3_english_marks);

    // Calculate percentage for Student 3
    float student3_percentage = calculatePercentage(student3_total_marks);

    // Display student details
    printf("Student ID: %d\n", student1_ID);
    printf("Mathematics Marks: %d\n", student1_math_marks);
    printf("Science Marks: %d\n", student1_science_marks);
    printf("English Marks: %d\n", student1_english_marks);
    printf("Total Marks: %d\n", student1_total_marks);
    printf("Percentage: %.2f%%\n\n", student1_percentage);

    printf("Student ID: %d\n", student2_ID);
    printf("Mathematics Marks: %d\n", student2_math_marks);
    printf("Science Marks: %d\n", student2_science_marks);
    printf("English Marks: %d\n", student2_english_marks);
    printf("Total Marks: %d\n", student2_total_marks);
    printf("Percentage: %.2f%%\n\n", student2_percentage);

    printf("Student ID: %d\n", student3_ID);
    printf("Mathematics Marks: %d\n", student3_math_marks);
    printf("Science Marks: %d\n", student3_science_marks);
    printf("English Marks: %d\n", student3_english_marks);
    printf("Total Marks: %d\n", student3_total_marks);
    printf("Percentage: %.2f%%\n", student3_percentage);

    return 0;
}
// Function to calculate the sum of marks in mathematics, science, and English
int calculateSumOfMarks(int math_marks, int science_marks, int english_marks) {
    return math_marks + science_marks + english_marks;
}

// Function to calculate the percentage based on the total possible marks (300)
float calculatePercentage(int total_marks) {
    return ((float)total_marks / 300.0) * 100.0;
}

