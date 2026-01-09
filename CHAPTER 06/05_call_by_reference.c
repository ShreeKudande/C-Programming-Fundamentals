#include <stdio.h>

int sum(int *, int *);

// Sum should change the value of x
int sum(int *a, int *b)
{
    *a = 6;
    return *a + *b;
}

int main(void)
{
    int x = 5, y = 5;
    printf("The sum is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x); // The value of x is changed

    return 0;
}

// Output :-
// The sum is 11
// The value of x is 6
