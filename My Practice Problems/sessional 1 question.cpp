#include <stdio.h>

int getStolenNumber(char region) {
    int num_stolen;

    printf("Enter the number of stolen cars in the %c region: ", region);
    scanf("%d", &num_stolen);

    if (num_stolen < 0) {
        printf("Number of cars cannot be less than zero. Exiting the program.\n");
        return -1; // Return -1 to indicate an error
    }

    return num_stolen;
}

void findHighestNumber(int north, int south, int east, int west) {
    char maxRegion = 'N';
    int maxStolen = north;

    if (south >= maxStolen) {
        maxRegion = 'S';
        maxStolen = south;
    }

    if (east >= maxStolen) {
        maxRegion = 'E';
        maxStolen = east;
    }

    if (west >= maxStolen) {
        maxRegion = 'W';
        maxStolen = west;
    }

    printf("The region with the highest number of stolen cars is %c with %d stolen cars.\n", maxRegion, maxStolen);
}

int main() {
    int north, south, east, west;

    north = getStolenNumber('N');
    if (north == -1) return 1; // Exit the program with an error code

    south = getStolenNumber('S');
    if (south == -1) return 1; // Exit the program with an error code

    east = getStolenNumber('E');
    if (east == -1) return 1; // Exit the program with an error code

    west = getStolenNumber('W');
    if (west == -1) return 1; // Exit the program with an error code

    findHighestNumber(north, south, east, west);

    return 0;
}

