#include <stdio.h>
// Q.Write a program containing a function which reverses the array passed to it.

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while(start<end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

}

int main(void){
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    reverseArray(arr, n);

    printArray(arr, n);
    return 0;
}

//Output :-
//1 2 3 4 5 6 
//6 5 4 3 2 1 
