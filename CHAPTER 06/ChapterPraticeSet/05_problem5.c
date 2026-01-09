#include <stdio.h>
// Q.Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

int* sum(int a, int b) {
    int s = a + b;
    int* ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;
}
 
float* average(int a, int b) {
    float avg = (a + b) / 2.0;
    float* ptr = &avg;
    printf("The average is %.2f\n", avg);
    return ptr;
}

int main(void) 
{
    int x = 5, y = 5;
    int* ptr1;
    float* ptr2; 

    ptr1 = sum(x,y);
    ptr2 = average(x,y);
    printf("The address of sum is %u and of average is %u", ptr1, ptr2);

    return 0;
}

