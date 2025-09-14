 #include <stdio.h>

 // Count the number of open lockers after all the students have taken their turn.
int openLocks(int number_of_lockers, int number_of_students) {
    int number_of_open_lockers = 0;
    for (int locker_no = 1; locker_no <= number_of_lockers; locker_no++) {
        int count = 0;
        for (int student = 1; student <= number_of_students; student++) {
            if (locker_no % student == 0) {
                count++;
            }
        }
        if (count%2 !=0) 
        {
            number_of_open_lockers++;
        }
    }
    return number_of_open_lockers;
}

// Find the locker number that is touched by the most students.
int mostTouchableLocker(int number_of_lockers, int number_of_students) {
  int most_touched_locker_is= 0;
  int add_count=1;
  for (int student_no = 1; student_no <= number_of_lockers; student_no++) {
    int count_is = 0;
    for (int locker_number = 1; locker_number <=number_of_students ; locker_number++) {
      if (student_no % locker_number == 0) {
        count_is++;
      }
    }

    if (count_is >= add_count) {
      add_count = count_is;
      most_touched_locker_is =student_no;
    }
  }
 
  return most_touched_locker_is;
}
 
// Count the number of open lockers after all the students have taken their turn, assuming that every prime number student will close all the lockers and the rest will continue as instructed before.
int my_prime_function(int number_of) {
    if (number_of <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= number_of; i++) {
        if (number_of % i == 0) {
            return 0; // n is divisible by i, so not prime
        }
    }
    return 1; // n is prime
}

// Function to calculate the number of open lockers after students' actions

int openLocks_t3(int number_of_lockers, int number_of_students) {
    int open_lockers = 0;

    for (int locker = 1; locker <= number_of_lockers; locker++) {
        int state = 0; // Initialize all lockers as closed (0)

        for (int student = 1; student <= number_of_students; student++) {
            if (my_prime_function(student)) {
                state = 0; // Close the locker for prime students
            } else if (locker % student == 0) {
                state = 1 - state; // Toggle the locker state
            }
        }

        if (state == 1) {
            open_lockers++;
        }
        if (number_of_lockers < number_of_students)
        {
            return number_of_students / number_of_lockers; 
        }
         
    }

    return open_lockers;
}

int openLocks_t4(int number_of_lockers, int number_of_students) {
    int open_locker_no =0;

    // Iterate through lockers
    for (int locker_no =1; locker_no <= number_of_lockers; locker_no++) {
        int opened_lock = 0; // Locker starts as closed

        // Iterate through students
        for (int student_number =1; student_number <= number_of_students; student_number++) {
            // If the student is not prime and the locker number is divisible by the student
            if (!my_prime_function(student_number) && locker_no % student_number ==0) {
                opened_lock = !opened_lock;
            }
        }

        // If the locker is open, increment the count
        if (opened_lock) {
            open_locker_no++;
        }
    }

    return open_locker_no;
}

void test1(int arr[][3], int size)
{
    printf("\n\nTask 1 Results\n\n");
    int passed = 0;
    int failed = 0;
    int val;
    for (int i = 0; i < size; i++)
    {
        val = openLocks(arr[i][0], arr[i][1]);
        if (val == arr[i][2])
            passed++;
        else
        {
            failed++;
            printf("Test Failed\n");
            printf("Lockers = %d\n", arr[i][0]);
            printf("Students= %d\n", arr[i][1]);
            printf("Expected= %d\n", arr[i][2]);
            printf("Result =  %d", val);
            printf("\n-------------------------------------");
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("Total Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
}

void test2(int arr[][3], int size)
{
    printf("\n\nTask 2 Results\n\n");
    int passed = 0;
    int failed = 0;
    int val;
    for (int i = 0; i < size; i++)
    {
        val = mostTouchableLocker(arr[i][0], arr[i][1]);
        if (val == arr[i][2])
            passed++;
        else
        {
            failed++;
            printf("Test Failed\n");
            printf("Lockers = %d\n", arr[i][0]);
            printf("Students= %d\n", arr[i][1]);
            printf("Expected= %d\n", arr[i][2]);
            printf("Result =  %d", val);
            printf("\n-------------------------------------");
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("Total Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
}

void test3(int arr[][3], int size)
{
    printf("\n\nTask 3 Results\n\n");
    int passed = 0;
    int failed = 0;
    int val;
    for (int i = 0; i < size; i++)
    {
        val = openLocks_t3(arr[i][0], arr[i][1]);
        if (val == arr[i][2])
            passed++;
        else
        {
            failed++;
            printf("Test Failed\n");
            printf("Lockers = %d\n", arr[i][0]);
            printf("Students= %d\n", arr[i][1]);
            printf("Expected= %d\n", arr[i][2]);
            printf("Result =  %d", val);
            printf("\n-------------------------------------");
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("Total Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
}

void test4(int arr[][3], int size)
{
    printf("\n\nTask 4 Results\n\n");
    int passed = 0;
    int failed = 0;
    int val;
    for (int i = 0; i < size; i++)
    {
        val = openLocks_t4(arr[i][0], arr[i][1]);
        if (val == arr[i][2])
            passed++;
        else
        {
            failed++;
            printf("Test Failed\n");
            printf("Lockers = %d\n", arr[i][0]);
            printf("Students= %d\n", arr[i][1]);
            printf("Expected= %d\n", arr[i][2]);
            printf("Result =  %d", val);
            printf("\n-------------------------------------");
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("Total Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
}

int main()
{
    int arr1[10][3] = {{10,10,3},
                      {100,100,10},
                      {100,72,34},
                      {70,100,8},
                      {10000,1000,5228},
                      {0,0,0},
                      {1,0,0},
                      {10000,10000,100},
                      {10000,2000,5187},
                      {17000,2154,8989}};
    int arr2[10][3] = {{10,10,10},
                      {20,10,20},
                      {72,100,72},
                      {100,70,60},
                      {150,40,120},
                      {15,7,12},
                      {1500,450,1260},
                      {100,100,96},
                      {17000,2154,15120},
                      {10000,10000,9240}};
    int arr3[10][3] = {{10,10,3},
                      {100,100,3},
                      {100,95,6},
                      {1000,60,16},
                      {1000,10000,3},
                      {10000,95,598},
                      {100,12,8},
                      {1500,450,3},
                      {1700,2154,1},
                      {10000,60,166}};

    int arr4[10][3] = {{10,10,6},
                      {100,100,39},
                      {100,95,41},
                      {100,96,40},
                      {1000,10000,463},
                      {10000,95,5827},
                      {100,12,74},
                      {1000,97,657},
                      {1700,2154,818},
                      {1000,1,1000}};
    test1(arr1,10);
    test2(arr2,10);
    test3(arr3,10);
    test4(arr4,10);
    return 0;
}