#include <stdio.h>

int sum(int, int);

int sum(int a, int b) {
    return a + b;
}

int main(void)
{
    int x = 5, y = 5;
    printf("The sum is %d\n", sum(x,y)); //Call by Value, it gives the copy of x and y too the function, function can not change the values of x and y.
    return 0;
}
