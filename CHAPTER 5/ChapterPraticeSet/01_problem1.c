#include <stdio.h>
// Q.Write a program using function to find average of three numbers.
float average();

float average(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main(void)
{
    int a = 10, b = 20, c = 30;
    printf("The average of %d, %d and %d is %2.f\n", a, b, c, average(a, b, c));
    return 0;
}
