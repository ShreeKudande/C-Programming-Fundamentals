#include <stdio.h>

int main(void){
    //Q.Write a program to calculate the sum of the numbers occuring in the multiplication table of 8. (consider 8X1 to 8X10).

    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += (8*i);
    }
    printf("%d\n", sum);
    //Output - 440
    return 0;
}