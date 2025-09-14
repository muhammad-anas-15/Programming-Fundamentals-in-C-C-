#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int random_no()
{
    sleep(1);
    srand(time(NULL));
    return rand()%6+1;
}
int main() {
    
    printf("Rolling dice 1: %d\n",random_no());
    printf("Rolling dice 2: %d\n",random_no());
    printf("Rolling dice 3: %d\n",random_no());
    printf("Rolling dice 4: %d\n",random_no());
    printf("Rolling dice 5: %d\n",random_no());
    printf("Rolling dice 6: %d\n",random_no());
    return 0;
}