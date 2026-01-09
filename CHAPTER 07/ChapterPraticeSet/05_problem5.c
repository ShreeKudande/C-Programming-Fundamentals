#include <stdio.h>
// Q.Write a program containing a function which reverses the array passed to it.

// This function reverses the array in place
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1; // Get the last valid index
    int temp;

    // Loop until the two pointers meet in the middle
    while (start < end) {
        
        // Swap the elements at the start and end positions
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers closer to the center
        start++;
        end--;
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to run the program
int main() {
    int myArray[] = {10, 20, 30, 40, 50, 60};
    
    // Calculate the number of elements in the array
    int n = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original array: ");
    printArray(myArray, n);

    // Call the function to reverse the array
    reverseArray(myArray, n);

    printf("Reversed array: ");
    printArray(myArray, n);

    return 0;
}