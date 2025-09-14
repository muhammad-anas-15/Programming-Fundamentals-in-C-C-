#include <iostream>
using namespace std;

int main() {
    int arr[6] = {40, 20, 30, 60, 50}; // Declare an array of 5 elements
    int i = 0;  // Initialize outer index (i)

    // Outer loop to iterate through the array
    while (i < 6) {
        int j = 0; // Initialize inner index (j) to 0 for each i
        // Inner loop for comparing elements
        while (j <= i) { 
            if (arr[i] > arr[j]) { // Compare elements
                // Swap arr[i] and arr[j]
                int temp = arr[i]; // Use a temporary variable for swapping
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++; // Increment inner index (j)
        }
        i++; // Increment outer index (i)
    }

    // Output the sorted array
    cout << "Sorted array: ";
    for (int k = 0; k < 6; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0; // Indicate successful termination
}
