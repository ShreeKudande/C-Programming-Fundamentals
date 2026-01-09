#include <stdio.h>

int fibonacci(int);

int fibonacci(int n) {
    if( n == 1 || n == 2 ) {
        return n - 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(void){
    //Q.Write a program using recursion to calculate nth element of Fibonacci series.

    //a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers. The simplest is the series 0, 1, 1, 2, 3, 5, 8, etc.

    /*
    Formula :
    fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);
    */

    int n = 7;
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    //Output :- 8
    return 0;
}