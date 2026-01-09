#include <stdio.h>

int main(void){
    //Q8.Write a program to calculate the factorial of a given number using a for loop.
    //Q.Repeat 8 using while loop.

    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 .......X n
    // 0! = 1

    int n = 5;
    int product = 1;
    int i = 1;
    while (i<=n)
    {
        product *=i; //product = product*i;
        i++;
    }
    printf("The factorial is %d", product);
    //Output - 120
    return 0;
}